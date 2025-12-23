#include<iostream>
using namespace std;

int main() {
    int a, b;
    int choice;

    cout << "Enter the num: " << endl;
    cin >> a >> b;

    cout << "chose an operation:\n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "sum" << a + b << endl;
        break;

    case 2 :
        cout << "mul" << a * b << endl;
        break;
    
    case 3:
        cout << "sub" << a - b << endl;
        break;
    
    default: cout << "not valid "<< endl;
        break;
    }
}