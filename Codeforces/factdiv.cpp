#include <iostream>
using namespace std;
long long int fact(int x){
    long long int k=1;
    for(int i=2; i<=x; i++){
        k=k*i;
    }
    return k;
}
int main(){
    long long int x,y;
    cin>>x>>y;
    long long int a[x];
    for(int i=0; i<x; i++){
        cin>>a[i];
    }
    long long int k=0;
    for(int i=0; i<x; i++){
        k=k+fact(a[i]);
    }
    if(k%fact(y)==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}