#include<bits/stdc++.h>
using namespace std;

int bubble_Sort(int arr[] , int n){
    for(int i = 1; i < n; i++){
        //for round 1 to n
    bool swapped = false;
        for(int j = 0 ; j < n - i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if(swapped = false){ // we add this for sorted array
        break;
    }
    }
    
    
}

int main() {
    int n;
    cout << "Enter the size: " ;
    cin >> n;

    int arr[n];
    cout << "Enter the array :" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bubble_Sort(arr, n);
    cout << "Array after sorting : " << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << "  " << endl;
    }
    cout <<  endl;
    return 0;
}