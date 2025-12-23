//Que : Find first and last element of array

#include<iostream>
using namespace std;

int first_last(int arr[], int size){
    int start = 0;
    int end = size - 1;

    cout << "First ele: " << arr[start] << endl;
    cout << "last ele: " << arr[end] << endl;
}

int main() {
    int arr[7] = {9,2,3,4,5,6,7};

    int find = first_last(arr,7);

    
    return 0;
}

   