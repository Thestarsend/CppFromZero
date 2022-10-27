//
// Created by StarsEnd on 2022/9/16.
//


#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

bool is(int input){
    for (int i = 2; i < sqrt(input); i++) {
        if (input % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int input;
    string result;
    cin >> input;
    if (is(input) && input > 1){
        result = "Yes";
    } else{
        result = "No";
    }
    cout<<result;
    return 0;
}
