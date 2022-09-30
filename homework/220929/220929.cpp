//
// Created by StarsEnd on 2022/9/16.
//


#include "iostream"
#include "iomanip"
#include "algorithm"

using namespace std;

//下列功能用函数实现，并测试。
//1) 求一个数是否是质数
//2）判断某整数是否只由奇数数字构成.(bool isOddDigit(int n)）
//3) 返回整数从右边起某一指定位的数值(如int digitR(12345,2),返回4)
//4) 判断某整数是否是回文数(bool isPalindromes(int n)).并调用该函数找出1000内的回文数.(如11,22,121,676等是回文数)
//5）求满足下列条件的最小自然数 x：（1）个位数是 8；（2）将个位数移至最高位，所得的新数是原数的 4 倍。
//设计一个函数判断输入数的位数int numberDigit(int n); 设计一个函数将个位移到最高位生成一个新数字。
//5）用冒泡算法实现排序。
//6）用递归函数计算一个整数中所有位数之和。

//1) 求一个数是否是质数
bool first(int input){
    for (int i = 2; i < input; i++) {
        if (input % i == 0){
            return false;
        }
    }
    return true;
}
//2）判断某整数是否只由奇数数字构成.(bool isOddDigit(int n)）
bool isOddDigit(int n){
    string input = to_string(n);
    for (int i = 0; i < input.length(); i++) {
        if (input[i] % 2 == 0){
            return false;
        }
    }
    return true;
}
//3) 返回整数从右边起某一指定位的数值(如int digitR(12345,2),返回4)
int digitR(int input, int r){
    return to_string(input)[to_string(input).length() - r]-48;
}
//4) 判断某整数是否是回文数(bool isPalindromes(int n)).并调用该函数找出1000内的回文数.(如11,22,121,676等是回文数)
bool isPalindromes(int n){
    string input = to_string(n);
    bool isOdd = input.length() % 2 != 0;
    string l,r;
    if (isOdd){
        l = input.substr(0,input.length()/2);
        reverse(l.begin(),l.end());
        r = input.substr(input.length()/2+1);
        return (l==r);
    } else{
        l = input.substr(0,input.length()/2);
        reverse(l.begin(),l.end());
        r = input.substr(input.length()/2);
        return (l==r);
    }
}
//设计一个函数判断输入数的位数int numberDigit(int n); 设计一个函数将个位移到最高位生成一个新数字。
int numberDigit(int n){
    return to_string(n).length();
}
//设计一个函数将个位移到最高位生成一个新数字。
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

//5）用冒泡算法实现排序。
int sort(int input[]){
    int length;
    int m;
    for (int i = 0; i < length; ++i) {
        cin >> input[i];
    }
    for (int i = 0; i <length; ++i) {
        for (int j = i+1; j < length; ++j) {
            if (input[i] > input[j]){
                m =input[j];
                input[j]=input[i];
                input[i]=m;
            }
        }
    }
/*    for (int i = 0; i < length-1; ++i) {
        cout << input[i] << " ";
    }
    cout << input[length - 1];*/
}
//6）用递归函数计算一个整数中所有位数之和。
int allSum(int input){
    if (input>0){
        return allSum(input / 10)+input % 10;
    } else{
        return 0;
    }
}

int unitSum(int input){

}

int main(){
//    cout<<isOddDigit(1151)<<isOddDigit(114514)<<endl;
//    cout<<digitR(114514,3)<<endl;
//    cout<<isPalindromes(114411)<<isPalindromes(41114)<<isPalindromes(12322)<<endl;
//    cout << numberDigit << endl;
//    cout<<allSum(123456)<<endl;
//    cout << moveN(123) << endl;
    cout<<"fn:"<<findNumber()<<endl;
    return 0;
}
