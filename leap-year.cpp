#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int y) {
    return ( (y % 4 == 0 and y % 100 != 0) or (y % 400 == 0) );
     
}

int main() {
    int year;
    cin >> year;
    if(isLeapYear(year)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
