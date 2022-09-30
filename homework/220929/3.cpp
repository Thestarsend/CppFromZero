//
// Created by StarsEnd on 2022/9/16.
//


#include "iostream"
#include "algorithm"

using namespace std;

bool isPalindromes(int n){
    string input = to_string(n);
    bool isOdd = input.length() % 2 != 0;
    string l,r;
    l = input.substr(0,input.length()/2);
    reverse(l.begin(),l.end());
    if (isOdd){
        r = input.substr(input.length()/2+1);
    } else{
        r = input.substr(input.length()/2);
    }
    return (l==r);
}

void out(){
    bool first = true;
    int line = 0;
    for (int i = 0; i < 1000; i++) {
        if (isPalindromes(i)){
            if (first){
                cout<<i;
                first = false;
            } else{
                cout<<" "<<i;
            }
            line++;
        }
        if (line == 10){
            cout<<endl;
            line = 0;
            first = true;
        }
    }
}

int main(){
    int order,input;
    string result;
    cin>>order>>input;
    if (order == 5){
        out();
    } else{
        if (isPalindromes(input)){
            result = "Yes";
        } else{
            result = "No";
        }
        cout<<result;
    }
    return 0;
}
