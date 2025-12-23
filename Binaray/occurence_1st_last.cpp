#include<iostream>
using namespace std;

int firstocc(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;
  

    while(start <= end) {
        int mid = start + (end - start)/2;

        if(arr[mid] == key){
            ans = mid; // to store 
            end = mid - 1;
        }
        else if(arr[mid] < key) {
          start = mid + 1; // left occu
        }
        else if (arr[mid] > key){
            end = mid - 1;

        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastoccu(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == key) {
            ans = mid; // store
            start = mid + 1;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else if(arr[mid] > key){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int main() {
    int arr[8] = {1,2,2,2,2,2,3,9};

    int first = firstocc(arr,8,2);

    cout << "First occu :  " << first << endl;

     int last = lastoccu(arr,8,9);

    cout << "last occu :  " << last << endl;
}