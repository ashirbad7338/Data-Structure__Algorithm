#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    int k=0,l=0;
    while(k<n and l<m){
        if(a[k]<=b[l]){
            cout<<a[k];
            l++;
        }
        else{
            k++;
        }
    }
}
