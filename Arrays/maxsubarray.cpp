#include <iostream>
using namespace std;
int maxsum1(int a[],int n){
    int res=a[0];
    for(int i=0; i<n; i++){
        int curr=0;
        for(int j=i; j<n; j++){
            curr=curr+a[j];
            res=max(res,curr);
        }
    
    }
    return res;
}
int maxsum2(int a[],int n){
    int res=a[0];
    int maxending=a[0];
    for(int i=1; i<n; i++){
        maxending =max((maxending+a[i]),a[i]);
        res=max(res,maxending);
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
    cout<<maxsum1(a,n)<<endl;
    cout<<maxsum2(a,n)<<endl;
}