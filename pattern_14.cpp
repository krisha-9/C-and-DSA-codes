/*
ABCD
BCDE
CDEF
DEFG
*/
#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    while( i <= n){
        int j = 1;
        int value = i - 1;
        while(j <= n){
            char ch = 'A' + value;
            cout << ch;
            value = value + 1;
            j = j + 1;
        }
    cout << endl;
    i = i + 1;
    }
} 
/*
2nd method

char ch = 'A' + i + j -2
*/