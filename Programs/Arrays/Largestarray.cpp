//                    LARGEST IN THE ARRAY

#include<iostream>
using namespace std;

int main() {
int arr[] = {7, 5, 2, 4, 9};
int n = sizeof(arr) / sizeof(int);

int max = arr[0];
for(int i=0;i<n;i++)  {
    if(arr[i] > max)
    max = arr[i];
}
cout<< max;
return 0;
}
