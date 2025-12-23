#include<bits/stdc++.h>
using namespace std;

void printsymbol(char s, int count){
    cout << string(count,s) << endl;
}

int main() {
    char s;
    int n;

    cin >> s >> n;

    int arr[n];

    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    for(int i=0; i < n; i++){
        printsymbol(s,arr[i]);
    }
    return 0;

}