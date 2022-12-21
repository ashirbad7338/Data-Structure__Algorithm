#include <iostream>
using namespace std;
int mod(int x,int y){
    if(x>y){
        return x-y;
    }
    else{
        return y-x;
    }
}
int32_t main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        long long int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        long long int sum=0;
        for(int i=0; i<n; i++){
            sum=sum+a[i];
        }
        if(sum<n){
            cout<<1<<endl;
        }
        else{
            cout<<mod(sum,n)<<endl;
        }
    }
}