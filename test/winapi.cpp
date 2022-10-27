//
// Created by StarsEnd on 2022/10/16.
//

#include "windows.h"
#include "winbase.h"
#include "ioapiset.h"
#include "iostream"

using namespace std;
void test( int *i){
    int d=1;
    int* c = &d;
    cout<<c<<endl;
    *i = *c;
    cout<<i<<endl;
}

int main(){
//    DeviceIoControl();
    int ib =12;
    int* i = &ib;
    cout<<i<<endl;
    test(i);
    cout<<i;
    return 0;
}