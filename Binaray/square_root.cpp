#include<iostream>
using namespace std;

int binarysearch(int n){
    int s = 0;
    int e = n;
    long long int mid = s + (e - s)/2;
    long long int ans = -1;

    while(s <= e){
        long long int square = mid*mid;
        if(square == n){
            return mid;
        }
        if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}



int main(){
  int x = 27;
  int sqrt = binarysearch(27);

  cout << "Square root is: " << sqrt << endl;

  return 0;


}


// my mistake : what i do is i compared sq with mid instead of n