#include <iostream>
using namespace std;
/*Naive
Time=Theta(nd),Space=Theta(1)
*/
void leftrotate1(int arr[],int n){
    int temp=arr[0];
    for(int i=1; i<n; i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
void leftrotate(int arr[],int n, int d){
    for(int i=0; i<d; i++){
        leftrotate1(arr,n);
    }
}
//