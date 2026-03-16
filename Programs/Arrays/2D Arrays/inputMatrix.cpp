// making matrix by taking values from user
#include<iostream>
using namespace std;

int main() {
    int arr[3][4];
     int n=3 , m = 4;

    for(int i=0; i<n; i++) {        //rows
        for(int j=0; j<m; j++) {    //columns
                                      // 0,0  0,1  0,2  0,3 i++
            cin>>arr[i][j];
        }  
    }

    for(int i=0; i<n; i++) {        //rows
        for(int j=0; j<m; j++) {    //columns
                                     // 0,0  0,1  0,2  0,3 i++
            cout<<arr[i][j] << " ";
        }
        cout<<endl;
    }
}
