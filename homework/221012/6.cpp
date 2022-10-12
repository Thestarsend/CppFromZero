//
// Created by StarsEnd.
//


#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

int main(){
    string input;
    string mid;
    cin>>input;
    for (int i = 0; i < input.length(); ++i) {
        if (input[i]!=','){
            mid+=input[i];
        } else {
            if (i>0 and input[i-1]!=','){
                cout<<mid<<endl;
            }
            mid = "";
        }
    }
    cout<<mid;
    return 0;
}
