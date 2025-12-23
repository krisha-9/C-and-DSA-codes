//Que : peak mountain index

#include<iostream>
using namespace std;

int peak(int arr[], int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) /2;
    while(start < end) {
     
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start) /2;
    }
    return start;
}

int main() {
    int arr[8] = {0,1,0,0,0,9,5,6};

    int find = peak(arr,8);
    cout << "Total occur : " << find << endl;
}

/*
| Concept              | Meaning                                                |
| -------------------- | ------------------------------------------------------ |
| **Problem Type**     | Find peak element (binary search on monotonic pattern) |
| **Algorithm Used**   | Binary Search                                          |
| **Time Complexity**  | O(log n)                                               |
| **Space Complexity** | O(1)                                                   |
| **Condition**        | Works best on “mountain-like” or “bitonic” arrays      |
*/