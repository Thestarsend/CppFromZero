//
// Created by StarsEnd.
//


#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

void max_min_element(int *array, int n, int *min, int *max){
    *max =0,*min =0;
    int maxc=array[0],minc=array[0];
    for (int i = 1; i < n; ++i) {
        if (array[i]>maxc){
            maxc = array[i];
            *max = i;
        }
        if (array[i]<minc){
            minc = array[i];
            *min = i;
        }
    }
}

int main(){
    int n,min,max;
    string input;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; ++i) {
        cin>>array[i];
    }

    max_min_element(array,n,&min,&max);

    cout<<min<<" "<<max;
    return 0;
}
