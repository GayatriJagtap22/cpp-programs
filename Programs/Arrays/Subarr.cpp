//   prints all the sub arrays 1, 12, 123, 1234, 12345,  ... 

#include<iostream>
using namespace std;

void printsubarrays(int *arr, int n) {
    for (int start = 0; start < n; start++) {
        for (int end = start; end < n; end++) {
            // print subarray from start to end
            for (int i = start; i <= end; i++) {
                cout << arr[i] << " ";
            }
            cout << ", ";
        }
        cout << endl;
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    printsubarrays(arr, n);

    return 0;
}
