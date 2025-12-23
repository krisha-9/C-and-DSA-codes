#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int main(){
    int arr[5] = {3,8,10,17,1};

    cout << "Pivot array : " << getPivot(arr,5) << endl;
}


/* dry run
| start | end | mid | arr[mid] | arr[mid] >= arr[0]? | Action    |
| ----- | --- | --- | -------- | ------------------- | --------- |
| 0     | 4   | 2   | 10       | ✅ Yes               | start = 3 |
| 3     | 4   | 3   | 17       | ✅ Yes               | start = 4 |

| Metric           | Value                    |
| ---------------- | ------------------------ |
| Time Complexity  | O(log n) — binary search |
| Space Complexity | O(1) — no extra memory   |

*/