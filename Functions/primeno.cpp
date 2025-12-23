#include<iostream>
using namespace std;


// 1 --> prime no.
// 0 --> not a prime no.
//function signture

bool isprime(int n) { //bool isliye use kiye kyunki hume 1 or 0 me ans chahiye
    for(int i= 2; i < n; i++){

       // divide hogya
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    cin >> n;

    if(isprime(n)) {
        cout << "It is a prime no." << endl;
    }
    else{
        cout << "Not a prime no. " << endl;
    }
}