//
// Created by StarsEnd.
//

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char a[20] = "TER", b[20] = "COMP";
    int i = 0 ;
    strcat(a,b);
    while (a[i++]!='\0')
        b[i] = a[i] ;
    cout<<a <<" "<<b;
}



