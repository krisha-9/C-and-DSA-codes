#include<iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 3;

    // before swapping

    cout << a << "and" << b << endl;

    int temp = a;
    a = b;
    b = temp;

    //after swapping

    cout << a << "and" << b << endl;
}