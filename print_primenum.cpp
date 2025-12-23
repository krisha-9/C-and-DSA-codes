#include<iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    for(int n =  1; n <= a; a++ ){
        if(n <= 1){
            continue;
        }
        bool isprime = true;

        for(int i = 2; i < n; i++){
            if(n % i == 0){
                isprime = false;
                break;
            }
        }
        if(isprime){
            cout << n << " ";
        }
    }
    return 0;
}