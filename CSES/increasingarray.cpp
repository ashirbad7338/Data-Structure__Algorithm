#include <iostream>
using namespace std;
int32_t increment(int arr[],int n){
    int k=0;
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]){
            while(arr[i]!=arr[i-1]){
                arr[i]++;
                k++;
            }
        }
    }
    return k;
}
int32_t main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<increment(a,n);
    
}