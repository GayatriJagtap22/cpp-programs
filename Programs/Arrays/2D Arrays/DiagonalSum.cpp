#include<iostream>
using namespace std;

// To print the sum of both diagonal include middle one only one time 
int diagonalSum(int mat[][3], int n)
 {
    int sum = 0;
                                                   // O(n)^2
    for (int i = 0; i < n; i++) {  
        sum += mat[i][i];                        // Primary diagonal

         if (i != n - i - 1) {                 // Secondary diagonal (avoid double count for middle element)
            sum += mat[i][n - i - 1];
        }
    }                               
    return sum;
}

int main() {
    int mat[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout << diagonalSum(mat, 3);              // (1 + 5 + 9) + (3 + _ + 7)

    return 0;
}


//  With O(n) time complexity
int diagonalSum(int mat[][4], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {          // rows
        for (int j = 0; j < n; j++) {      // columns

            if (i == j) {                  // primary diagonal
                sum += mat[i][j];
            }
            else if (i + j == n - 1) {     // secondary diagonal
                sum += mat[i][j];
            }

        }
    }

    return sum;
}

int main() {

    int matrix2[3][3] = {     // odd matrix
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

       int matrix[4][4] = {        // even matrix
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16} };

    cout << diagonalSum(matrix, 4);

    return 0;
}
