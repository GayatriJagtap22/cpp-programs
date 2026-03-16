#include<iostream>
using namespace std;

   void spiralMatrix(int matrix[][4], int n, int m){ // always need to define no.of columns
       int srow = 0, scol = 0;
       int erow = n-1, ecol = m-1;

       while(srow <= erow && scol <= ecol) {

   //             TOP
      for(int j = scol; j <= ecol; j++){
         cout<< matrix[srow][j]<<" ";
      }

   //             RIGHT
      for(int i = srow + 1; i <= erow; i++) {
         cout<< matrix[i][ecol]<<" ";
      }
   //           BOTTOM
      for(int j = ecol - 1; j >= scol; j--) {
        if(srow == erow){          // middle
            break;
        }
        cout<< matrix[erow][j]<<" ";
      }

   //          LEFT
      for(int i = erow - 1; i > srow; i--){
        if(scol == ecol){           // middle
            break;
        }
        cout<<matrix[i][scol]<<" ";
      }
               srow++;scol++;
               erow--;ecol--;
       }
       cout<<endl;
    }

           int main() {
          int matrix[4][4] = {{1,2,3,4},             //   _ _ _ _
                             {5,6,7,8},             //   _ _ _   |
                             {9,10,11,12},        //    |  _ _|  |
                             {13,14,15,16}};      //   |_ _ _ _ |
           // For Odd
           int matrix2[3][4] = {{1,2,3,4},            //   _ _ _ _
                             {5,6,7,8},             //     _ _ _  |
                             {9,10,11,12}};        //    |  _ _|  |
                                                    //   |_ _ _ _ | 
        spiralMatrix(matrix, 4, 4);
         return 0;
       }
         
