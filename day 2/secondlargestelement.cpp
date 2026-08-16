#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int secondLargest(vector<int>& arr) {
    int largest = INT_MIN;
    int second = INT_MAX;

    for(int i = 0; i<arr.size() ; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i =0; i<n ; i++) {
        cin >> arr[i];
    }

    cout << secondLargest(arr);
    return 0;
}
