#include<iostream>
#include<vector>
using namespace std;

void movezeros(vector<int>& arr){
    int j = 0; // it indicates where to put next non-zero no.

    //step 1: all non-zeros put in starting
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] != 0){
            arr[j] = arr[i];
            j++;
        }
    }
    // step2 : aLL empty postion fills with zero

    for(int i = j; i < arr.size(); i++){
        arr[i] = 0;
    }
}

int main() {
    vector<int> arr = {1,2,3,0,4,0,5,6,0,8,0,9,0,11,0};

    movezeros(arr);

    cout << "Results: ";
    for(int n : arr) {
        cout << n << "  ";
    }
    cout << endl;

    return 0;
}