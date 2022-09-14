//
// Created by 11613 on 2022/9/14.
//

#include <iomanip>
#include "iostream"
using namespace std;

void firstMission(){
/*    1．输入1个整数，判断能否被7整除。*/
    int input;
    cin>>input;
    bool flag = input % 7 == 0;
    if(flag){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

}

void secondMission(){
/*    2．某宾馆房间标准价格398元/天，价格随旅游季节和团队规模浮动：
    旺季(7-9月)：20个房间以上(含20间)团队优惠30%；不足20间优惠15%；
    淡季：20房间以上(含20间)团队优惠50%；不足20间的团队优惠30%；
    编写程序，输入月份和预定房间数，输出每天应收总金额。*/
    int price = 398;
    int month,rooms;
    double sum = 0;
    cin>>month>>rooms;
    sum = price * rooms;
    if (month >=7 && month <= 9){
        if (rooms >= 20){
            sum *= 0.7;
        } else{
            sum *= 0.85;
        }
    } else{
        if (rooms >= 20){
            sum *= 0.5;
        } else{
            sum *= 0.7;
        }
    }

    cout<<fixed<<setprecision(2)<<sum;

}

void thirdMission(){
/*
    3．输入4位自然数，判断这个数是否为降序数(如7532是降序数)
*/
    string input;
    int last;
    bool flag = true;
    cin>>input;
    last = (int)input[0];
    for (int i = 1; i < input.length(); ++i) {
        if (last < input[i]){
            flag = false;
            break;
        }
        last = (int)input[i];
    }
    if(flag){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
}

void fourthMission(){
/*    4．学院举行“程序设计大赛”，学生“程序设计”课程成绩可以因为在大赛上获奖而加分：一等奖加10分，二、三等奖均加5分，其它的不加分。加分后的成绩如果超出100分则按100分计算。
    编写程序，输入同学的“程序设计”成绩和获奖等级，重新计算该同学的“程序设计”成绩。*/
    int sum = 0;
    int base;
    int input;
    cin >> base >> input;
    sum = base;
    switch (input) {
        case 1:{
            sum += 10;
            break;
        }
        case 2:{
            sum += 5;
            break;
        }
        default:
            break;
    }
    if (sum > 100){
        sum = 100;
    }
    cout<<sum;
}

void fifthMission(){
/*    5．输入一个整数，判断它能否被3、5和7整除，并输出如下信息：
    (a)能同时被3个数整除
    (b)能同时被2个数整除，并指明是被哪两个数整除
    (c)能被1个数整除，并指明是被哪个数整除
    (d)不能被3个数整除。*/
    int input;
    int sum = 0;
    bool action[4];
    int flag00[4] = {0,3,5,7};
    cin >> input;
    action[0] = false;
    action[1] = input % 3 == 0;
    action[2] = input % 5 == 0;
    action[3] = input % 7 == 0;
    for (int i = 1; i < 4; i++) {
        if (action[i]){
            sum++;
        }
    }
    switch (sum) {
        case 1:{
            cout << "c\n";
            for (int i = 1; i < 4; ++i) {
                if (action[i]){
                    cout << flag00[i];
                }
            }
            break;
        }
        case 2:{
            cout << "b\n";
            bool flag = false;
            for (int i = 1; i < 4; ++i) {
                if (action[i]&&!flag){
                    cout << flag00[i] << " ";
                    flag = true;
                } else if (action[i]&&flag){
                    cout << flag00[i];
                }
            }
            break;
        }
        case 3:{
            cout << "a";
            break;
        }
        default:{
            cout<< "d";
        }
    }



}

void sixthMission(){
/*    6．输入年份和月份，输出该年该月的天数(需判断该年是否为闰年）*/
    int days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int leap_days[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int year;
    int month;
    cin >> year >> month;
    bool leap = (year % 4 == 0)&&(year % 100 != 0)||(year % 400 == 0);
    int result;
    if (leap){
        result = leap_days[month-1];
    } else{
        result = days[month-1];
    }
    cout << result;
}

void seventhMission(){
/*    7. 编程实现，用户输入的2个操作数和1个运算符（ 只包含+、-、*、/ ），由计算机输出运算结果。*/
    string input[3];
    string result;
    cin >> input[0] >> input[2];
    cin >> input[1];
    int a = stod(input[0]);
    int b = stod(input[2]);
    switch (input[1].data()[0]) {
        case '+':{
            result = to_string(a+b);
            break;
        }
        case '-':{
            result = to_string(a-b);
            break;
        }
        case '*':{
            result = to_string(a*b);
            break;
        }
        case '/':{
            if (b != 0){
                result = to_string(a/b);
            } else{
                result = "Error!";
            }

            break;
        }
    }

    cout<< result;
}

int main(){
//    firstMission();
//    secondMission();
//    thirdMission();
//    fourthMission();
//    fifthMission();
//    sixthMission();
    seventhMission();
}
