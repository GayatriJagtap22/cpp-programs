#include<iostream>
using namespace std;

// To search in sorted matrix 
bool searchSortedMatrix(int matrix[][4], int n, int m, int key) {
    int row = 0;
    int col = m - 1;

    while (row < n && col >= 0) {
        if (matrix[row][col] == key) {
            cout << "Element found at (" << row << ", " << col << ")" << endl;
            return true;
        }
        else if (matrix[row][col] > key) {
            col--;   // move left
        }
        else {
            row++;   // move down
        }
    }

    cout << "Element not found" << endl;
    return false;
}

int main() {
    int matrix[4][4] = {
        {10, 20, 30, 40},                     // starts from 40 -> 30 -> 35 -> 25 -> 29 -> 33
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int key = 33;
    searchSortedMatrix(matrix, 4, 4, key);
    return 0;
}
