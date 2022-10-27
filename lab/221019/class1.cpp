//
// Created by StarsEnd.
//


#include "iostream"

using namespace std;

const int N = 10;

int main() {
    int a[N];
    int s, i, j, t;
    //1如下这段代码功能？
    for (i = 0; i < N; i++) {
        if (i % 2) a[i] = i * i;
        else a[i] = 100 - (i / 2) * (i / 2);
    }
    //2如下这段代码功能？
    for (i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
    //3如下这段代码功能？
    s = 0;
    for (i = 0; i < N; i++)
        s = s + a[i];
    cout << "sum of a = " << s;
    cout << endl;
    //4如下这段代码功能？
    for (i = 0; i < N; i++) {
        t = a[i];
        j = i - 1;
        while (j >= 0 && t > a[j]) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = t;
    }
    //5如下这段代码功能？
    for (i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}

