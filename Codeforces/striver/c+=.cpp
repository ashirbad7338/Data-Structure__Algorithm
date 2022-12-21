#include <iostream>
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n,k=0;
        cin>>a>>b>>n;
        while(a<=n and b<=n){
            if(a>b){
                b+=a;
                k++;
            }
            else{
                a+=b;
                k++;
            }
        }
        cout<<k<<endl;
    }
}