//
// Created by StarsEnd.
//


#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

string addD(string a, string b){
    string result;

    int mid=0,res=0;
    if (a.length()<b.length()){
        string m;
        m=b;
        b=a;
        a=m;
    }
    for (int i = a.length()-1,j=b.length()-1; j >= 0; i--,j--) {
        res = a[i]+b[j]-48*2+mid;
        if (res<10){
            result = to_string(res)+result;
            mid=0;
        } else{
            result = to_string((res)%10)+result;
            mid = 1;
        }
    }
    for (int i = a.length()-b.length()-1; i >=0 ; i--) {
        if (!mid){
            result = to_string(a[i]-48)+result;
        } else{
            result = to_string((a[i]-48+mid)%10)+result;
            mid = (a[i]-48+mid)/10;
        }
    }
    if (mid){
        result = "1"+result;
    }
    return result;
}

int main(){
    string a,b;
    cin>>a>>b;
    cout<<addD(a,b);
    return 0;
}
