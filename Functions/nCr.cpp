#include<iostream>
using namespace std;

int factorial(int n){ // find fact as per nCr formula
    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r){  // after finding fact we simplify it
    int numerator = factorial(n);

    int deno = factorial(r) * factorial(n - r);

    return numerator/deno;
}


int main() { // here is the main function
   int n , r;

   cin >> n >> r;

   cout << "Ans is : " << nCr(n,r) << endl;
}