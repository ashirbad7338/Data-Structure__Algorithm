#include <iostream>
using namespace std;
int32_t main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int e=0,o=0,n;
        cin>>n;
        long long int a[2*n];
        for(int i=0; i<2*n; i++){
            cin>>a[i];
        }
        for(int i=0; i<2*n; i++){
            if(a[i]%2==0){
                e++;
            }
            else{
                o++;
            }
        }
        if(e==o){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}