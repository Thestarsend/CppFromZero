//
// Created by StarsEnd.
//


#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

int allSum(int input){
    if (input>0){
        return allSum(input / 10)+input % 10;
    } else{
        return 0;
    }
}

int main(){
    int n,input;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>> input;
        cout<<allSum(input);
    }
    return 0;
}
