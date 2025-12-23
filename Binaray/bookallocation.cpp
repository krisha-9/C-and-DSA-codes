#include <iostream>
using namespace std;

// Function to check if a given mid value is a valid solution
bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        // If a single book has more pages than mid, not possible
        if (arr[i] > mid) {
            return false;
        }

        // If adding this book exceeds mid, allocate to next student
        if (pageSum + arr[i] > mid) {
            studentCount++;
            pageSum = arr[i];

            if (studentCount > m) {
                return false;
            }
        } else {
            pageSum += arr[i];
        }
    }

    return true;
}

// Function to allocate books such that maximum pages are minimized
int allocation(int arr[], int n, int m) {
    int s = 0;
    int sum = 0;

    // Calculate sum of all pages
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    // Binary search for optimal minimum
    while (s <= e) {
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            e = mid - 1; // Try to minimize maximum pages
        } else {
            s = mid + 1; // Increase mid if not possible
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

// Driver function
int main() {
    int arr[] = {40, 50, 60, 70};
    int n = 4;  // Number of books
    int m = 2;  // Number of students

    cout << "Minimum possible maximum pages = " << allocation(arr, n, m) << endl;
    return 0;
}
