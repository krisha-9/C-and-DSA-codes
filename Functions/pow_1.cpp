#include<iostream>
using namespace std;

long long power() {
    long long a, b;
    cin >> a >> b;

    int ans = 1;
    for(int i = 1; i <= b; i++){
        ans = ans * a;
    }                                                                                                                                                                                                                                                                                                                                                                                                  
    return ans;
}

int main() {
    long long ans = power();
    cout << "answer is : " << ans << endl;
    return 0;
}