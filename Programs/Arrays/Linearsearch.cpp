//             LINEAR SEARCH (find key=10)

#include<iostream>
uisng nmaespace std;

int linearsearch(int *arr, int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  
        }
    }
    return -1;            // return -1 if key not found
}

int main() {
    int arr[] = {1, 3, 5, 10}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int index = linearsearch(arr, n, 10);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
