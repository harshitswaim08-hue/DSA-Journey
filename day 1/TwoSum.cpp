#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int> nums, int target) {

    for(int i = 0; i < nums.size(); i++) {

        for(int j = i + 1; j < nums.size(); j++) {

            if(nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }

    return {};
}

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    vector<int> answer = twoSum(nums, target);

    if(answer.size() == 2) {
        cout << answer[0] << " " << answer[1];
    }
    else {
        cout << "No pair found";
    }

    return 0;
}
    