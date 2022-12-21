#include <iostream>
using namespace std;
bool isprime(int x){
    int k=0;
    for(int i=1; i<=x; i++){
        if(x%i==0){
            k++;
        }
    }
    if(k==2){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        int a[x];
        a[0]=y;
        for(int i=1; i<x; i++){
            if(isprime(i+1)){
                a[i]=i+1;
            }
        }
    }
}