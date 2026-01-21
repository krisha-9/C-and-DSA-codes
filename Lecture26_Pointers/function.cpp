#include<iostream>
using namespace std;

void print(int *p) {
    cout << "Address" << p << endl;
    cout << " value" << *p << endl;
}

void update(int *p) {
    p = p + 1; // Changes address locally only
    *p = *p + 1; // value update hogi
}

int main() {
    int val = 5;
    int *p = &val;

    cout << "Before" << p << endl;
    update(p);
    cout << "After" << p << endl;
}