#include<iostream>
using namespace std;

bool canPaint(int arr[], int n, int m, int mid){
    int painterCount = 1;
    int boardsum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > mid){
            return false;
        }

        if(boardsum + arr[i] > mid){
            painterCount++;
            boardsum = arr[i];  // ✅ assign only once

            if(painterCount > m){
                return false;
            }
        }
        else {
            boardsum += arr[i];  // add to current painter
        }
    }
    return true;
}


int Painter_partion(int arr[], int n, int m){
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];  
}
int e = sum;
int ans = -1;
int mid = s + (e - s)/2;

while(s <= e){
    if(canPaint(arr,n, m, mid)){
        ans = mid;
        e = mid - 1;
    }
    else {
        s = mid + 1;
    }
    mid = s + (e - s) / 2;
}
return ans;
}

// drive fun

int main(){
    int arr[] = {5,5,5,5};
    int n = 4;
    int m = 2;

    cout << "Minum time to get this job done : " << Painter_partion(arr,n,m) << endl;
    return 0;
}
