//
// Created by StarsEnd on 2022/9/16.
//


#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

int numberDigit(int n){
    return to_string(n).length();
}

int moveN(int n){
    string s = to_string(n);
    int len = s.length();
    string result = s.substr(len-1)+s.substr(0,len-1);
    return stoi(result);
}
//5）求满足下列条件的最小自然数 x：（1）个位数是 8；（2）将个位数移至最高位，所得的新数是原数的 4 倍。
int findNumber(){
    int target = 0;
    int i = 0;
    while (true){
        target = i * 10 + 8;
        if (moveN(target) == target * 4){
            return target;
        }
        i++;
    }
}

int main(){
    cout<<findNumber();
    return 0;
}
