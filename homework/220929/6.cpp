//
// Created by StarsEnd on 2022/9/16.
//

#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

void sort(int (&input)[], int left, int right, bool action){
    int m;
    bool flag;
    for (int i = left; i <right; i++) {
        for (int j = i+1; j <= right; j++) {
            if (action){
                flag = input[i] > input[j];
            } else{
                flag = input[i] < input[j];
            }
            if (flag){
                m =input[j];
                input[j]=input[i];
                input[i]=m;
            }
        }
    }
}
//1up
int main(){
    int n,m;
    int a[20] = {0,11361, 24645, 7999, 30603, 32620, 1069 ,29868 ,27413, 9113 ,3204};
    cin>>n>>m;
    while (m--){
        int op,l,r;
        cin>>op>>l>>r;
        sort(a,l,r,op);
    }
    for (int i = 0; i < 10; ++i) {
        cout<<a[i]<<endl;
    }
    return 0;
}
//11361 24645 7999 30603 32620 1069 29868 27413 9113 3204
//10 5
//1 1 2
//0 4 9
//0 1 5
//1 3 7
//1 2 8
/*
step6/sumOfPrime.cpp:3:58: error: parameter ‘input’ includes reference to array of unknown bound ‘int []’
void sort(int (&input)[], int  left, int right, int action){
    ^
    step6/sumOfPrime.cpp: In function ‘int main()’:
    step6/sumOfPrime.cpp:28:19: error: no matching function for call to ‘sort(int [20], int&, int&, int&)’
    sort(a,l,r,op);
    ^
    step6/sumOfPrime.cpp:3:6: note: candidate: void sort(int (&)[], int, int, int)
    void sort(int (&input)[], int left, int right, int action){
        ^~~~
                step6/sumOfPrime.cpp:3:6: note:   no known conversion for argument 1 from ‘int [20]’ to ‘int (&)[]’
        In file included from /usr/local/include/c++/7.3.0/algorithm:62:0,
                from /usr/local/include/c++/7.3.0/x86_64-linux-gnu/bits/stdc++.h:65,
                from step6/sumOfPrime.cpp:1:
        /usr/local/include/c++/7.3.0/bits/stl_algo.h:4856:5: note: candidate: template<class _RAIter, class _Compare> void std::sort(_RAIter, _RAIter, _Compare)
        sort(_RandomAccessIterator __first, _RandomAccessIterator __last,
                ^~~~
                 /usr/local/include/c++/7.3.0/bits/stl_algo.h:4856:5: note:   template argument deduction/substitution failed:
        step6/sumOfPrime.cpp:28:19: note:   deduced conflicting types for parameter ‘_RAIter’ (‘int*’ and ‘int’)
        sort(a,l,r,op);
        ^
        In file included from /usr/local/include/c++/7.3.0/algorithm:62:0,
                from /usr/local/include/c++/7.3.0/x86_64-linux-gnu/bits/stdc++.h:65,
                from step6/sumOfPrime.cpp:1:
        /usr/local/include/c++/7.3.0/bits/stl_algo.h:4826:5: note: candidate: template<class _RAIter> void std::sort(_RAIter, _RAIter)
        sort(_RandomAccessIterator __first, _RandomAccessIterator __last)
        ^~~~
         /usr/local/include/c++/7.3.0/bits/stl_algo.h:4826:5: note:   template argument deduction/substitution failed:
        step6/sumOfPrime.cpp:28:19: note:   deduced conflicting types for parameter ‘_RAIter’ (‘int*’ and ‘int’)
        sort(a,l,r,op);*/
