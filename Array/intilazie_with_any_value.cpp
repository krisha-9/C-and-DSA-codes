#include<iostream>
using namespace std;

int main() {
    int arr[20];

    for(int i = 0; i < 20; i++){
        arr[i] = 3;
        }
    for(int i = 0; i < 20; i++) {
        cout << "Array [" << i << "]: " << arr[i] << endl;
    }

    return 0;
}