//
// Created by li on 25-9-2.
//
#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

// cmath 库就是 C 语言中的 math.h 库，提供了常用的数学函数（sqrt, pow, abs 等）和常量（M_PI 等）
const double PI = M_PI; // M_PI 是 cmath 库中定义的常量
enum Shape {
    LINE      = 1,
    RECTANGLE = 2,
    CIRCLE    = 3
};
enum Query {
    PERIMETER = 1,
    DISTANCE  = 2
};

struct Point {
    double x=0.0, y=0.0;
};
struct Geo {
    Point points[2];
    double R = 0.0;
    // TODO: 定义图形
    Shape type;
};

Point getCenter(const Geo& geo) {

    Point mid;
    switch (geo.type) {
        case LINE: {

            mid.x = (geo.points[0].x + geo.points[1].x)/2;
            mid.y = (geo.points[0].y + geo.points[1].y)/2;


            // TODO: 计算并返回线段中点
            break;
        }
        case RECTANGLE: {
            mid.x = (geo.points[0].x + geo.points[1].x)/2;
            mid.y = (geo.points[0].y + geo.points[1].y)/2;
            // TODO: 计算并返回矩形中心
            break;
        }
        case CIRCLE: {
            return geo.points[0];
            // TODO: 直接返回圆心

        }
        default:
            break;
    }
    return mid;
}

double calculatePerimeter(const Geo& geo) {
    double perimeter = 0.0;
    switch (geo.type) {
        case LINE: {
            perimeter = sqrt( pow ( geo.points[0].x - geo.points[1].x ,2) + pow ( geo.points[0].y - geo.points[1].y, 2 ) );

            // TODO: 计算并返回线段长度
            break;
        }
        case RECTANGLE: {
            perimeter = 2 * abs ( geo.points[0].x - geo.points[1].x ) + 2 * abs  ( geo.points[0].y - geo.points[1].y );
            // TODO: 计算并返回矩形周长
            break;
        }
        case CIRCLE: {
            perimeter = PI * 2 * geo.R ;
            // TODO: 计算并返回圆周长
            break;
        }
    }
    return perimeter;
}

double calculateDistance(const Geo& geo1, const Geo& geo2) {
    Point c1 = getCenter(geo1), c2 = getCenter(geo2);
    return sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
}

int main() {
    int n, m;
    Geo shapes[1000];

    // TODO: 参考输出部分，完成输入

    cin >> n >> m;
    for ( int i=0 ; i< n ;i++) {

        int type ;
        cin >> type ;
        switch (type) {

            case 1 :shapes[i].type = LINE ;
                cin >> shapes[i].points[0].x>>shapes[i].points[0].y>>shapes[i].points[1].x>>shapes[i].points[1].y;
                break;

            case 2 : shapes[i].type = RECTANGLE ;
                cin >>shapes[i].points[0].x >> shapes[i].points[0].y >> shapes[i].points[1].x >> shapes[i].points[1].y;
                break ;

            case 3 : shapes[i].type = CIRCLE ;
                cin >> shapes[i].points[0].x >> shapes[i].points[0].y >> shapes[i].R;
                break;

            default: break;

        }
    }



    // 四舍五入保留两位小数的输出
    cout << fixed << setprecision(2);
    for (int i = 0; i < m; i++) {
        int queryType;
        cin >> queryType;

        switch (queryType) {
            case PERIMETER: {
                int idx;
                cin >> idx;
                cout << calculatePerimeter(shapes[idx-1]) << endl;
                break;
            }
            case DISTANCE: {
                int idx1, idx2;
                cin >> idx1 >> idx2;
                cout << calculateDistance(shapes[idx1-1], shapes[idx2-1]) << endl;
                break;
            }
            default:
                break;
        }
    }

    return 0;
}