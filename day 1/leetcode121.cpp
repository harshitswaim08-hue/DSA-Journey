#include <iostream>
using namespace std;
int main() {
    int arr[6] = {7,1,5,3,6,4};
    int smallest = arr[0];
    int largest = arr[0];
    int profit = 0;

    for(int i =1; i<6 ; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    for(int i =1 ; i<6 ;i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    profit = largest - smallest;
    cout << profit;
    
}   