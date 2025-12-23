#include<iostream>
#include<vector>
using namespace std;

int removeduplicate(vector<int>& nums){
    if(nums.empty())
        return 0;

    int i = 0; // solwer poiinyter and comparision with it
    for(int j = 0; j < nums.size(); j++){
        if(nums[j] != nums[i]) { //new uniq ele
            i++;
            nums[i] = nums[j]; // usko next position per dalege
        }
    }
    return i + 1; // total uni elem keh liye
}

int main() {
    vector<int> nums = {1,1,2,3,4,4,5,5,6};
    int k = removeduplicate(nums);

    cout << "Unquie count: " << k << endl;
    cout << "Array after removing duplicates : ";
    for(int i = 0; i < k; i++){
        cout << nums[i] << "   ";
    }
    return 0;
}