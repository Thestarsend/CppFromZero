//
// Created by StarsEnd.
//


#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

int main(){
    double c = sqrt(5);
    int input;
    cin>>input;
    if(input < 3){
        cout<<"1";
    } else{
        cout<<(int)((pow((1 + c)/2,input)- pow((1-c)/2,input))/c);
    }
    return 0;
}
