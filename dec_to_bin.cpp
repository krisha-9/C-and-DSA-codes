#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the num n in the form of decimal: " << endl;
    cin >> n;

    int ans = 0;
    int i = 0;

    while(n != 0){
        
        int bit = n & 1; //Checks if the last bit of n is 1 or 0

        ans = (bit * pow(10,i)) + ans;

        n = n >> 1;
        i++;
    }

    cout << "Ans is : " << ans << endl;
    return 0;
}