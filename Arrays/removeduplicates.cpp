#include <iostream>
using namespace std;
//Naive solution
//Time=O(n),Space=O(n)
int remdup1(int arr[],int n){
    int temp[n];
    temp[0]=arr[0];
    int res=1;
    for(int i=1; i<n; i++){
        if(temp[res-1]!=arr[i]){
            temp[res]=arr[i];
            res++;
        }
    }
    for(int i=0; i<res; i++){
        arr[i]=temp[i];
    }
    return res;
}
//Efficient solution
//Time=O(n),Space=O(1)
int remdup2(int arr[],int n){
    int res=1;
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[res-1]){
            arr[res]=arr[i];
            res++;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<remdup(a,n); i++){
        cout<<a[i]<<" ";
    }
}