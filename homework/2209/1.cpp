// Created by StarsEnd.
#include "iostream"
#include "cmath"
#include "iomanip"

using namespace std;

bool isPrime(int input) {
    for (int i = 2; i < sqrt(input); i++) {
        if (input % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {

        	    double x,y,result;
        	    cin>>x>>y;
        	    if (x<0 && y<0){
            	        result = pow(numbers::e,x+y);
            	    } else if ((x+y)>=1&&(x+y)<10){
            	        result = log(x+y);
            	    } else{
            	        result = log10(abs(x+y)+1);
            	    }
        	    cout<<fixed<<setprecision(20)<<result;

    return 0;
}
