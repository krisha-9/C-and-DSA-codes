/*
1234554321
1234**4321
123****321
12******21
1********1
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while (i <= n){
        // print 1st triangle
        int j = 1;
        while(j <= n - i + 1) {
            cout << j;
            j = j + 1;
        }
        

        // print 2nd triangle

        int k = 1;
        while (k <= 2*i - 2){
            cout << "*";
            k = k + 1;
        }

        // print 3rd triangle 
        
        /*int v = 1;
        while (v <= i + 1 - 2){
            cout << "*";
            v = v + 1;
        }*/

        // print 4th triangle
        // rev triangle
        int z = n - i + 1;
        while (z >= 1){
            cout << z;
            z = z - 1;
        }
    cout << endl;
    i = i + 1;
    }
}