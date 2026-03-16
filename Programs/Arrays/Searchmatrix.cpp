#include<iostream>
using namespace std;

// Search key in a sorted matrix broute force algorithm( simple algo)
bool search_BruteForce(int mat[][4], int m, int n, int key) {

    for (int i = 0; i < m; i++) {           // rows
        for (int j = 0; j < n; j++) {       // columns

            if (mat[i][j] == key) {
                cout << "Element at position (" << i << ", " << j << ")" << endl;
                return true;
            }
        }
    }

    cout << "Element not found" << endl;
    return false;
}

int main() {

    int matrix[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int key = 33;
    search_BruteForce(matrix, 4, 4, key);
    return 0;
}
