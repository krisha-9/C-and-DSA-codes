#include<iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;

    for(int i = 0; i < s.length(); i++){
        count++;
        cout << s << " : " << count << endl;
    }
}