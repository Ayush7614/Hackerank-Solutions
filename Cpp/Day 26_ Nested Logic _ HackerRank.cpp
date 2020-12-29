#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int eday, emon, eyear;
int aday, amon, ayear;

cin >> aday >> amon >> ayear;
cin >> eday >> emon >> eyear;

int fine = 0;

int dyear = ayear - eyear;
int dmon = amon - emon;
int dday = aday - eday;

if (dyear > 0) {
    fine = 10000;
}
else if (dmon > 0 && dyear == 0) {
    fine = 500 * dmon;
}
else if (dday > 0 && dmon == 0) {
    fine = 15 * dday;
}

cout << fine << endl; 
    return 0;
}
