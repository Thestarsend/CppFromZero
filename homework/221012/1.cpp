//
// Created by StarsEnd.
//

#include <limits>
#include <vector>
#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

void bubbleSort(vector<int>& arr, int len) {
    int i, j;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
void selectionSort(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int min = i;
        for (int j = i + 1; j < arr.size(); j++)
            if (arr[j] < arr[min])
                min = j;
        std::swap(arr[i], arr[min]);
    }
}
void merge(vector<int> &Array, int front, int mid, int end) {
    vector<int> leftArray(Array.begin() + front, Array.begin() + mid + 1);
    vector<int> rightArray(Array.begin() + mid + 1, Array.begin() + end + 1);
    int l = 0, r = 0;
    leftArray.insert(leftArray.end(), numeric_limits<int>::max());
    rightArray.insert(rightArray.end(), numeric_limits<int>::max());
    for (int i = front; i <= end; i++) {
        if (leftArray[l] < rightArray[r]) {
            Array[i] = leftArray[l];
            l++;
        } else {
            Array[i] = rightArray[r];
            r++;
        }
    }
}

void mergeSort(vector<int> &Array, int front, int end) {
    if (front >= end)
        return;
    int mid = (front + end) / 2;
    mergeSort(Array, front, mid);
    mergeSort(Array, mid + 1, end);
    merge(Array, front, mid, end);
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> input;
    for (int i = 0; i < n; ++i) {
        input.push_back(0);
        cin>>input[i];
    }
    switch (m) {
        case 1:{
            bubbleSort(input,n);
            break;
        }
        case 2:{
            selectionSort(input);
            break;
        }
        case 3:{
            mergeSort(input,0,input.size()-1);
            break;
        }
    }
    cout<<input[0];
    for (int i = 1; i < n; ++i) {
        cout<<" "<<input[i];
    }
    return 0;
}
