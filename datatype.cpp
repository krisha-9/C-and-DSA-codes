#include<iostream>
using namespace std;

int main() {
     int a = 123;
     cout << a << endl;

     float f = 1.23;
     cout << f << endl;

     int size = sizeof(a);
     cout << "Size of a is :" << size << endl;

      float size_1 = sizeof(f);
     cout << "Size of f is :" << size_1 << endl;
}