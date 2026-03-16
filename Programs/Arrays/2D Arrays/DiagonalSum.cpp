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
