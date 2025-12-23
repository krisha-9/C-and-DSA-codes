#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    cout << "Printing count from 1 to n" << endl;

    int i =1;
    for(int i = 1; i <= n ; i++){
        cout << i << endl;
    }
}
    // we can also do it like this

    /*int i =1 ;
    for( ;  ;  ) {
        if(i <= n) {
            cout<< i << endl;
        }
        else {
        break;
        }  
        
        i++; 
     }
}
     */