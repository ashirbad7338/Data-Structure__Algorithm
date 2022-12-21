#include <iostream>
using namespace std;
int maxksum(int arr[],int n, int k){
    int curr=0;
    for(int i=0; i<k; i++){
        curr=curr+arr[i];
    }
    int res=curr;
    for(int j=0; j<n; j++){
        curr=curr+arr[j]-arr[j-k];
        res=max(res,curr);
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
    cout<<maxksum(a,n,3);
}