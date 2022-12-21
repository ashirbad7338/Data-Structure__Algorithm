#include <iostream>
using namespace std;
int32_t main(){
    int n,t;
    cin>>n>>t;
    while(t--){
        if(n%10==0){
            n=n/10;
        }
        else{
            n--;
        }
    }
    cout<<n;
}