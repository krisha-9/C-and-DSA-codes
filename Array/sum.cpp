#include<iostream>
using namespace std;

int Sum(int arr[], int n){
    int sum = 0;

    for(int i = 1; i < n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main() {
    int size;
    cin >> size;

    int arr[20];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
        cout << "Array : " << arr[i] << endl;
    }

    cout << "Sum of elements of array is: " << Sum(arr,size) << endl;
}