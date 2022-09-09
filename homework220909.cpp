//
// Created by StarsEnd on 2022/9/9.
//

#include "iostream"
#include <cmath>

using namespace std;

class TasksProcessor{
public:
    static double getCylinderVolume(double r, double h){
        return r*r*M_PI*h;
    }
    static int getSumOfThree(int threeNumber){
        if (threeNumber>999 ||threeNumber<100){
            cerr <<"Illegal input!"<<endl;
            exit(1);
        }
        int result = 0;
        for (int i = 2; i >= 0; i--) {
            result += threeNumber % (int )(pow(10,i));
            threeNumber /= (int )(pow(10,i));
        }
        return result;
    }
    static char getChangedChar(char input){
        return ((int)input<=90 && (int)input>=65) ? (char)((int)input+32) : (char)((int)input-32);
    }
    static void changeThreeNumber(int a, int b, int c){
        cout<<"\n4:\n"<<a<<"\t"<<b<<"\t"<<c<<endl;
        int d = c;
        c = a;a = b;b = d;
        cout<<a<<"\t"<<b<<"\t"<<c<<endl;
    }
    static int * getHoursFromS(int s){
        int *hour = new int [3];
        int m = s / 60;
        hour[2] = s % 60;
        hour[1] = m % 60;
        hour[0] = m / 60;
        return hour;
    }
};

int main(){
    cout <<"\n1:\nr=2,h=5:"<< TasksProcessor::getCylinderVolume(2.0,5.0) << endl ;
    cout << "\n2:\n909:" << TasksProcessor::getSumOfThree(909) << endl ;
    cout << "\n3:\nA:" << TasksProcessor::getChangedChar('A') << endl ;
    cout << "z:" << TasksProcessor::getChangedChar('z') << endl ;
    TasksProcessor::changeThreeNumber(5,8,9);

    int *hms;
    hms = TasksProcessor::getHoursFromS(114514);
    cout << "\n5:\n114514s:" << hms[0] << "h" << hms[1]<< "m" << hms[2] << "s" << endl;
    cout << "end";
    return 0;
}
