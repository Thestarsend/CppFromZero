//
// Created by StarsEnd.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int i = 0, base, n, j, num[30];
    cin >> n >> base;
    do {
        i++;
        num[i] = n % base;
        n = n / base;
    } while (n != 0);

    for (j = i; j >= 1; j--) {
        switch (num[j]) {
            case 15:
                cout << 'F';
                break;
            case 14:
                cout << 'E';
                break;
            case 13:
                cout << 'D';
                break;
            case 12:
                cout << 'C';
                break;
            case 11:
                cout << 'B';
                break;
            case 10:
                cout << 'A';
                break;
            default:
                cout << num[j];
        }
    }
    return 0;
}


