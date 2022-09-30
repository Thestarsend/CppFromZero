//
// Created by StarsEnd on 2022/9/16.
//

#include <cmath>
#include "iostream"
#include "iomanip"

using namespace std;

void first(){
//    1)输出100-1000之间能被3整除或个位是3的整数,每行输出10个。
    int a = 100;
    int line = 0;
    while (a <= 1000){
        if ((a % 3 == 0) || (a % 100 %10 == 3)){
            if (line<9){
                cout<<a<<" ";
                line++;
            } else{
                cout<<a<<endl;
                line = 0;
            }
        }
        a++;
    }
}

void second(){
//    2)对于整数n，输出其所有的因子.(如12的因子为:1,2,3,4,6,12)
    string resulta;
    string resultb;
    int input;
    bool first = true;
    cin >> input;
    for (int i = 1; i <= sqrt(input); i++) {
        if (input % i == 0 && !first){
            resulta = resulta + " " + to_string(i);
            if (i!=(input/i)){
                resultb =" "+ to_string(input/i) + resultb;
            }

        }else if (input % i == 0 && first){
            resulta = resulta + to_string(i);
            resultb =" "+ to_string(input/i) + resultb;
            first = false;
        }
    }
    cout<<resulta+resultb;
}

void third(){
//    3)输入一个数，统计该数的位数。（用do- while）
    int input;
    int result = 0;
    cin>>input;
    do {
        input /= 10;
        result++;
    } while (input > 0);
    cout<<result;
}

void fourth(){
//    4)输出1000内的完数.(完数是指其因子(不含本身)之和与本身相等的数,如6是完数,6 =1+2+3）
    int sum = 0;
    bool first = true;
    for (int i = 1; i <= 1000; i++) {
        sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0){
                sum += j;
            }
        }
        if (sum == i and first){
            cout << i ;
            first = false;
        } else if (sum == i and !first){
            cout << " " << i ;
        }
    }
}

void numberDigit(){
//    5)输入一正整数，输出其逆序数。（如输入1234，输出4321）
    int input;
    int m;
    int result = 0;
    int length = 0;
    cin >> input;
    int inputLen = input;
    do {
        inputLen /= 10;
        length++;
    } while (inputLen > 0);
    for (int i = length-1; i >= 0; i--) {
        m = input % 10;
        result += m*pow(10,i);
        input /= 10;
    }
    cout<<result;
}

void sixth(){
//    6）sin x 的级数求和公式, 计算精度为10-8。
    double factorial[] = {1,6,120,5040,362880,39916800};
    double input;
    double result = 0;
    bool flag = true;
    cin>>input;
    for (int i = 0; i < 5; i++) {
        if (flag){
            result += (input / factorial[i]);
        } else{
            result -= (input / factorial[i]);
        }
        flag = !flag;
    }
    cout<<fixed<<setprecision(8)<<result;

}

void seventh(){
//    7)输入正整数a和n，求a+aa+aaa+aaaa+a…a (n个)之和。（如输入2,3，计算2+22+222之和，输出246）
    int a;
    int n;
    int m;
    int result = 0;
    cin >> a >> n;
    for (int i = 1; i <= n; i++) {
        m = 0;
        for (int j = 0; j < i; j++) {
            m += pow(10,j) * a;
        }
        result += m;
    }
    cout<<result;
}

void eighth(){
//    8)打印输出如下图形。
//123456
// 12345
//  1234
//   123
//    12
//     1
    int input;
    cin>>input;
    for (int i = input; i > 0; i--) {
        for (int j = 0; j <input - i; ++j) {
            cout<<"  ";
        }
        for (int j = 1; j < i; j++) {
            cout<<j<<" ";
        }
        cout<<i;
        cout<<endl;
    }
    for (int i = input; i > 0; i--) {
        for (int j = 0; j <input - i; ++j) {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++) {
            cout<<j;
        }
        cout<<endl;
    }
}

void sort(){
    int length;
    int m;
    cin >> length;
    int n[length];
    for (int i = 0; i < length; ++i) {
        cin>>n[i];
    }
    for (int i = 0; i <length; ++i) {
        for (int j = i+1; j < length; ++j) {
            if (n[i]>n[j]){
                m =n[j];
                n[j]=n[i];
                n[i]=m;
            }
        }
    }
    for (int i = 0; i < length-1; ++i) {
        cout<<n[i]<<" ";
    }
    cout<<n[length-1];
}

void pi(){
    double pi=0;
    bool flag = true;
    for (int i = 0; i < 10000000; ++i) {
        if (flag){
            pi += 1.0/(i*2+1);
        } else{
            pi -= 1.0/(i*2+1);
        }
        flag =!flag;
    }
    pi *= 4;
    cout<<fixed<<setprecision(6)<<pi;
}

int main(){
//    first();
//    second();
//    third();
    fourth();
//    fifth();
//    sixth();
//    seventh();
//    eighth();
//    sort();
//    pi();
    return 0;
}
