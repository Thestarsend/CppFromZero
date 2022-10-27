//
// Created by StarsEnd.
//

#include <vector>
#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

vector<vector<int>> getN(int n){
    vector<vector<int>> out;
    for (int i = 1; i <= n; i++) {
        vector<int> result;
        out.push_back(result);
        out[i-1].push_back(1);
        if (i % 2 == 0) {
            for (int j = 1; j < i/2; ++j) {
                out[i-1].push_back(out[i-2][j-1]+out[i-2][j]);
            }
            for (int j = i/2-1; j >=0; j--) {
                out[i-1].push_back(out[i-1][j]);
            }
        } else {
            for (int j = 1; j < i/2+1; ++j) {
                out[i-1].push_back(out[i-2][j-1]+out[i-2][j]);
            }
            for (int j = i/2-1; j >=0; j--) {
                out[i-1].push_back(out[i-1][j]);
            }
        }
        out[i-1] = result;
    }
    return out;
}

int main() {
    vector<vector<int>> out;
    int n;
    cin >> n;
    out = getN(n);
    for (int i = 0; i < n; ++i) {
        cout<<out[i][0];
        for (int j = 1; j < i + 1; ++j) {
            cout<<" "<<out[i][j];
        }
        cout<<endl;
    }
    return 0;
}
