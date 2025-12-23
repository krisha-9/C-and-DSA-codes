#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[],int n){
    int Min = INT_MAX; 
    for(int i = 0; i < n; i++){
        if(num[i] < Min){
            Min = num[i];
        }
    }

    return Min;
}

int getMax(int num[], int n){
    int Max = INT_MIN;

    for(int i = 0; i < n; i++){
        if(num[i] > Max){
            Max = num[i];
        }
    }
    return Max;
}
int main() {
    int size;
    cout << "Enter the size of array: " << endl;
    cin >>  size;

    int arr[20];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    cout << "Min value of array is : " << getMin(arr,size) << endl;
    cout << "Max value of array is : " << getMax(arr,size) << endl;
}