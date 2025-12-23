#include<iostream>
using namespace std;

int main() {
    int n;
    int original;
    int reversed = 0;
    
    cin >> n;
    cout << "Enter num: " << endl;

    original = n;
    while ( n > 0) {
        int digit;
        digit = n % 10;
        reversed = (reversed * 10) + digit;
        n = n / 10;
    }
    

    if (original  == reversed ){
        cout << "The number is a palindrome!" << endl;
    }
    else {
        cout << "The num is not palindrome!" << endl;
    }
    


}