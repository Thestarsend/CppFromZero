//
// Created by StarsEnd.
//


#include <vector>
#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> box;
    for (int i = 0; i < 80; ++i) {
        box.push_back(0);
    }
    for (int i = 0; i < s.length(); ++i) {
        box[s[i]-65]++;
    }
    for (int i = 0; i < 26; ++i) {
        cout<<(char)(i+65)<<"&"<<(char)(i+97)<<" "<<box[i]+box[i+32]<<endl;
    }
    return 0;
}

