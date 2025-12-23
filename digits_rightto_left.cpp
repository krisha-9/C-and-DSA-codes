#include<bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;

    for(int i = n.size() - 1; i >= 0; i--) {
        cout << n[i];
        if(i != 0) {
            cout << " ";
        }
        
    }
    cout << endl;
    return 0;
}