#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int i = 2;

    while(i < n) {
        if (n % i == 0) {
            cout << "It is not an prime no." << i << endl;

    }
        else {
            cout << "It is an prime no. " << i <<  endl;
        }
        i = i + 1;
}
}