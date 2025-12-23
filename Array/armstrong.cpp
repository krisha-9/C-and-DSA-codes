#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int temp = n;
    int k = 0;
    int sum = 0;

    // count num of digits
    int t = n;
    while(t > 0){
        k++;
        t = t / 10;
    }
    while(n > 0){
        int ld = n % 10;
        sum = sum + pow(ld,k);
        n = n / 10;
    }

    if(sum == temp){
        cout << "Armstrong num" << endl;
    }
    else{
        cout << "Not an armstrong num" << endl;
    }
}