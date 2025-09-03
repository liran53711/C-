#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Student {
    int    id;
    string name;
    int    age;
    char   gender;
    string birthPlace;
};

int rulesCount, currentSortRules[6];

// TODO: 完成比较函数 globalCompare

// TODO: 完成排序函数 sortStudents

bool globalCompare ( const Student a, const Student b  ) {
//which one is bigger, 0 represents they are the same.
    for ( int i=0;i<rulesCount;i++) {
        switch ( currentSortRules[i]  ) {
            case 1:
                return a.id < b.id ;
            case -1:
                return a.id > b.id;
            case 2:
                if ( a.name < b.name ) return true;
                if ( a.name > b.name ) return false;
                break;
            case -2:
                if ( a.name > b.name ) return true  ;
                if ( a.name < b.name ) return false  ;
                break;
            case 3:
                if ( a.age < b.age ) return true ;
                if ( a.age > b.age ) return false ;
                break;
            case -3 :
                if ( a.age > b.age ) return true  ;
                if ( a.age < b.age ) return false ;
                break;
            case 4 :
                if ( a.gender < b.gender ) return true ;
                if ( a.gender > b.gender ) return false ;
                break;
            case -4 :
                if ( a.gender > b.gender ) return true  ;
                if ( a.gender < b.gender ) return false ;
                break;
            case 5 :
                if  ( a.birthPlace < b.birthPlace ) return true ;
                if (  a.birthPlace > b.birthPlace ) return false ;
                break;
            case -5 :
                if  ( a.birthPlace > b.birthPlace ) return true ;
                if ( a.birthPlace < b.birthPlace ) return false ;
                break;
        }
    }

return a.id < b.id;
}

void sortStudents(Student students[],int n) {
    Student sorted[n];
    sorted[0] = students[0];
    for ( int i=1; i<n;i++) {
        if ( globalCompare(sorted[i-1],students[i] ) ) {
            sorted[i] = students[i];
            continue;
        }
        for ( int j= 0 ; j < i ; j++ ) {
            if (globalCompare(students[i],sorted[j]) ) {//if the first one is smaller, then move the sorted sequence and insert the new one .
                for ( int k = i ; k >j ; k--) {
                    sorted[k] = sorted[k-1];
                }
                sorted[j] = students[i];
                break;
            }

        }

    }
    for (int i = 0; i < n; i++) {
        cout << sorted[i].id<< endl;
    }



}

int main() {
    int n, m;

    cin >> n >> m;
    Student students[50];
    for (int i = 0; i < n; i++) {
        cin >> students[i].id >> students[i].name >> students[i].age >> students[i].gender >> students[i].birthPlace;
    }

    while (m--) {
        cin >> rulesCount;
        for (int i = 0; i < rulesCount; i++) {
            cin >> currentSortRules[i];
        }
        
        sortStudents(students, n);

        // 输出排序后的结果

    }

    return 0;
}