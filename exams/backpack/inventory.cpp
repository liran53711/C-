#include "inventory.h"
#include <algorithm>
#include <vector>

Inventory::Inventory() {}

void Inventory::cateExist(int cate) {
    if (cate >= items.size()) {
        items.resize(cate + 1, std::vector<int>(4, 0));
    }
}

std::pair<int, int> Inventory::calcuMax(int lowQualityCount) {
    int max = lowQualityCount / 3;
    int consumed = max * 3;
    return std::make_pair(max, consumed);
}

void Inventory::addItem(int cate, int quality, int delta) {
    if (quality < 0 || quality >= 4 || delta <= 0) {
        return;
    }
    cateExist(cate);
    items[cate][quality] += delta;
}

void Inventory::queryItem(int cate, int* result) {
    for (int i = 0; i < 4; i++) {
        result[i] = 0;
    }
    if (cate < 0 || cate >= items.size()) {
        return;
    }
    for (int i = 0; i < 4; i++) {
        result[i] = items[cate][i];
    }
}

void Inventory::consume(const std::vector<std::vector<int>>& options) {
    for (const auto& option : options) {
        int cate = option[0];
        if (cate < 0 || cate >= items.size()) {
            continue;
        }
        for (int i = 0; i < 4; i++) {
            items[cate][i] -= option[i + 1];
        }
    }
}


bool Inventory::mix(int cate, const int* required, int* consumed) {

    for (int i = 0; i < 4; i++) {
        consumed[i] = 0;
    }


    if (cate < 0 || cate >= items.size()) {
        return false;
    }


    std::vector<long long> stock(4);
    for (int i = 0; i < 4; ++i) {
        stock[i] = items[cate][i];
    }

    long long extra = 0;
    for (int q = 3; q >= 0; --q) {
        long long need = (long long)required[q] + extra;
        if (need > stock[q]) {
            long long diff = need - stock[q];
            consumed[q] = (int)stock[q];
            extra = diff * 3;
        } else {
            consumed[q] = (int)need;
            extra = 0;
        }
    }


    if (extra > 0) {
        return false;
    }


    return true;
}