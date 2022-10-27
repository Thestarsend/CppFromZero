//
// Created by StarsEnd.
//


#include <vector>
#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

vector<vector<int>> sort(vector<vector<int>> list){
    vector<int> mid;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < list.size(); ++j) {
            for (int k = j+1; k < list.size(); ++k) {

                if (i>0){
                    if (list[j][i]>list[k][i] and list[j][i-1]==list[k][i-1] and list[j][0]==list[k][0]) {
                        mid = list[k];
                        list[k] = list[j];
                        list[j] = mid;
                    }
                } else{
                    if (list[j][i]>list[k][i]){
                        mid = list[k];
                        list[k] = list[j];
                        list[j] = mid;
                    }
                }
            }
        }
    }
    return list;
}

int main(){
    int n;
    //input
    cin>>n;
    vector<vector<int>> list;
    for (int i = 0; i < n; ++i) {
        vector<int> mid={0,0,0};
        list.push_back(mid);
        cin>>list[i][0]>>list[i][1]>>list[i][2];
    }
    //do
    list = sort(list);
    //print
    int i = 0;
    for (; i < list.size()-1; ++i) {
        cout<<"("<<list[i][0]<<","<<list[i][1]<<","<<list[i][2]<<")";
        cout<<endl;
    }
    cout<<"("<<list[i][0]<<","<<list[i][1]<<","<<list[i][2]<<")";
    return 0;
}
