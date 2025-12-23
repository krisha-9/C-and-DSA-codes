#include<iostream>
using namespace std;

int main() {
    int amount;

    cout << "Enter the amount : " ;
    cin >> amount;

    int Temp_amount = amount;

    for(int i = 1; i <=  4; i++) {
        switch (i) {
            case 1:
                cout << "100 rs note: "<< Temp_amount / 100 << endl;
                Temp_amount %= 100;
                break;
            case 2: // 50 rupee notes
                cout << "50 rupee notes: " << Temp_amount / 50 << endl;
                Temp_amount %= 50;
                break;

            case 3: // 20 rupee notes
                cout << "20 rupee notes: " << Temp_amount / 20 << endl;
                Temp_amount %= 20;
                break;

            case 4: // 10 rupee notes
                cout << "10 rupee notes: " << Temp_amount / 10 << endl;
             Temp_amount %= 10;
                break;
        }
    }

    if(Temp_amount != 0) {
        cout << "Remaining amount: " << Temp_amount << "Cannot broken into above mentioned notes" << endl;
    }

    return 0;
}
    
