#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;  // Only taken once, loop never changes it

    while (1) {  // Infinite loop
        switch (num) {
            case 1:
                cout << "Case 1" << endl;
                break; // Breaks out of switch, but not the while loop

            case 2:
                cout << "Case 2" << endl;
                break;

            default:
                cout << "Default case" << endl;
        }
    }
}
