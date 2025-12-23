//que: search a key in sorted and rotated array from pivot

#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s)/2;

    while(s < e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
}

int binarysearch(int arr[], int s, int e, int target){
    int start = s;
    int end = e;
    int mid = start + (end - start)/2;

    while(s <= e){
        if(arr[mid] == target){
            return mid;
        }

        if(target > arr[mid]){
            start = mid + 1; // right wala part
        }
        else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int findPosition(int arr[], int n, int target){

    int pivot =  getPivot(arr,n);

    if(target >= arr[pivot] && target <= arr[n - 1]){
        // BS on 1st line
        return binarysearch(arr,pivot,n-1,target);
    }
    else {
        //BS on 2nd line
        return binarysearch(arr, 0, pivot - 1, target);
    }
}

int main(){
    int arr[6] = {1,2,3,7,9,5};
    int target = 3;

    int pos = findPosition(arr,6,target);

     if(pos != -1)
        cout << "Element found at index: " << pos << endl;
    else
        cout << "Element not found." << endl;

    return 0;
}