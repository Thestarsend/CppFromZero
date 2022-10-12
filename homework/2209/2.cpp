// Created by StarsEnd.
#include "iostream"
#include "cmath"
#include "algorithm"

using namespace std;

int Hx(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 2 * x;
    }
    if (n >= 2) {
        return 2 * x * Hx(x, n - 1) - 2 * (n - 1) * Hx(x, n - 2);
    }
}

int main() {
    int x,n;
    vector<int> H;
    cin>>x>>n;
    H.push_back(1);
    H.push_back((2*x));
    if (n<=1){
        cout<<"y"<<H[n];
        return 0;
    }
    if (n>=2){
        for (int i = 2; i <=n; i++) {
            H.push_back(2 * x * H[i-1] - 2 * (i - 1) * H[i-2]);
        }
    }
    cout<<"递推："<<H[n]<<endl<<"递归"<<Hx(x,n);
    return 0;
}
