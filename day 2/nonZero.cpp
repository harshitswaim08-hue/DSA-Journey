#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& arr) {

    int nonZero = 0;

    // Move all non-zero elements to the front
    for(int i = 0; i < arr.size(); i++) {

        if(arr[i] != 0) {
            arr[nonZero] = arr[i];
            nonZero++;
        }
    }

    // Fill remaining positions with zero
    while(nonZero < arr.size()) {
        arr[nonZero] = 0;
        nonZero++;
    }
}

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    moveZeroes(arr);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}