#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int times=0; times<n; times++ ){
        for(int i=0; i<n-times; i++){
            if(a[i]>=a[i+1]){
               swap(a[i],a[i+1]);
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}