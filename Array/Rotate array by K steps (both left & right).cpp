#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void rotateRight(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;

    // Step 1: reverse whole array
    reverse(nums.begin(), nums.end());
    // Step 2: reverse first k elements
    reverse(nums.begin(), nums.begin() + k);
    // Step 3: reverse remaining n-k elements
    reverse(nums.begin() + k, nums.end());
}
void rotateleft(vector<int>& nums2, int k) {
    int n = nums2.size();
    k = k % n;

    // Step 1: reverse first k elements
    reverse(nums2.begin(), nums2.begin() + k);
    // Step 2: reverse remaining n-k elements
    reverse(nums2.begin() + k, nums2.end());
    // Step 3: reverse whole array
    reverse(nums2.begin(), nums2.end());
}

int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    int k = 6;

  // Right Rotate
    rotateRight(nums, k);
    cout << "Right Rotation: ";
    for (int x : nums) cout << x << " ";
    cout << endl;

    // Left Rotate
    vector<int> nums2 = {1,2,3,4,5,6,7};
    rotateLeft(nums2, k);
    cout << "Left Rotation: ";
    for (int x : nums2) cout << x << " ";
    cout << endl;

    return 0;
}
