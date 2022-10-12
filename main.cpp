//
// Created by StarsEnd on 2022/9/9.
//
#include <iostream>
#include <iomanip>
#include <vector>
#include "cmath"

using namespace std;

//abort
long fib ( int g )
{	switch ( g ){
        case 0 : return 0;
        case 1 :
        case 2 : return 1;
    }
    return ( fib( g - 1 ) + fib( g - 2 ) ) ;
}

int  main()
{
    vector<string> input;
    int result;
    input.emplace_back("0");
    input.emplace_back("1");
    input.emplace_back("2");
    result = 1;
    for (int i = 0; i < 3; ++i) {
        input[i] += "www";
        cout<<input[i];
    }
    return 0;
}


