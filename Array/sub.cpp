#include<iostream>
using namespace std;

int Sub(int arr[], int n){
    int sub = arr[0];

    for(int i = 0; i < n ; i++){
        sub = sub - arr[i];
    }
    return sub;
}

int main(){
    int size;
    cin >> size;

    int arr[20];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        cout << "Array : " << arr[i] << endl;
    }
    cout << "Subtraction of array is :" << Sub(arr,size) << endl;
}
