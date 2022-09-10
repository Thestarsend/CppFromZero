//
// Created by StarsEnd on 2022/9/9.
//
#include <iostream>
#include <iomanip>
#include "cmath"

using namespace std;

//abort

int main() {
    int s;
    int hour[3];

    cin >> s;

    int m = s / 60;
    hour[2] = s % 60;
    hour[1] = m % 60;
    hour[0] = m / 60;
    cout << hour[0] << "h" << hour[1] << "min" << hour[2] << "s";
    return 0;
}
