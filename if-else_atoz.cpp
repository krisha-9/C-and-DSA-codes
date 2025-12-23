#include<iostream>
using namespace std;

int main(){
    char ch ;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "It is lower case " << endl;
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "It is uppercase." << endl;
    }
    else {
        cout << "Neither uppercase nor lowercase" << endl;
    }
}