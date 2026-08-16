#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {

    int i = 0;
    for(int j = 1; j<nums.size(); j++) {
        if(nums[j]!= nums[i]) {
            i++;
            nums[i] = nums[j];
        }
        return i+1;
    }
}

int main() {

    int n;
    cin>>n;

    vector<int> nums(n);

    for(int j = 0; j<n; j++) {
        cin >> nums[j];
    }

    removeDuplicates(nums);

    for(int j =0; j<n; j++) {
        cout << nums[j];
    }
}