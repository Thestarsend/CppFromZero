#include <iostream>

using namespace std;

int main() {
    int a[6][6];
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 6; ++j) {
            a[i][j] = (i+j+1)%7;
        }
    }
    for (int i = 0; i < 6; ++i) {
        cout<<"(";
        for (int j = 0; j < 6; ++j) {
            cout<<" "<<a[i][j];
        }
        cout<<")"<<endl;
    }
    return 0;
}
