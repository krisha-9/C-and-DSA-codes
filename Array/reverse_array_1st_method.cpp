#include<iostream>
using namespace std;

void reverse(int arr[], int size){
    int start = 0, end = size - 1;

    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--; 
    }
}
int main() {
    int arr[5] = {1,3,2,4,5};
    cout << "Array is : " << endl;

    reverse(arr,5);
    
    cout << "Resversed array: " ;
    for(int i = 0; i <  5; i++) {
        cout << arr[i] << " " ;
    }
    cout << endl;

    return 0;


}