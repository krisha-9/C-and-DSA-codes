#include<iostream>
using namespace std;

int main() {
    // Start loop from i = 0, run while i <= 15, increment i by 2 after each iteration
    for(int i = 0; i <= 15; i += 2) {

        // Print the current value of i
        cout << i << " ";

        // Check if i is odd using bitwise AND (i & 1 == 1 means odd)
        if(i & 1) {
            // If i is odd, skip the rest of the loop body and move to next iteration
            continue;
        }

        // If i is even, increment i by 1 manually
        i++;
    }
}
