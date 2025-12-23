#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter total amount: ";
    cin >> amount;

    int choice;

    while (true) {
        cout << "\nChoose note type to calculate:\n";
        cout << "1. 100 rupee notes\n";
        cout << "2. 50 rupee notes\n";
        cout << "3. 20 rupee notes\n";
        cout << "4. 10 rupee notes\n";
        cout << "5. Exit\n";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "100 rupee notes: " << amount / 100 << endl;
                break;

            case 2:
                cout << "50 rupee notes: " << (amount % 100) / 50 << endl;
                break;

            case 3:
                cout << "20 rupee notes: " << (amount % 50) / 20 << endl;
                break;

            case 4:
                cout << "10 rupee notes: " << (amount % 20) / 10 << endl;
                break;

            case 5:
                cout << "Exiting..." << endl;
                return 0;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}
