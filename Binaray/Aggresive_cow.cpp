#include<iostream>
#include<algorithm>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid){
    int cowCount = 1;
    int lastpos =arr[0];

    for(int i = 1; i <n; i++){
        if(arr[i] - lastpos >= mid){
            cowCount++;
            lastpos = arr[i];
        }
        if(cowCount == k){
            return true;
        }
    }
    return false;
}

int aggresivecows(int arr[],int n,int k){
    sort(arr,arr + n);

    int s = 0;
    int e = arr[n - 1] - arr[0];
    int ans = -1;
    int mid = s + (e - s) / 2;

    while(s <= e){
        if(isPossible(arr,n,k,mid)){
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main() {
    int arr[] = {1,2,4,8,9};
    int n = 5;
    int k = 2;

     cout << "Largest minimum distance = " << aggresivecows(arr, n, k) << endl;
     return 0;
}