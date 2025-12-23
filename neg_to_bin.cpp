#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the num n :" << endl;
    cin >> n;

    int ans = 0;
    int i = 0;
    while(n != 0){
        int bit = n & 1;
        ans = (ans * 10) +  bit;
        n = n >> 1;    
    }
    int rev = 0;
    while(ans != 0){
        int d = ans % 10;
        rev = (rev * 10) + d;
        ans = ans  / 10;
    }

    cout << "Ans is : " << rev << endl;
}