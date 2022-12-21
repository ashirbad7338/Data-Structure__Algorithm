#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int m=0;
    int p=n-1;
    int k=0;
    while(m<=p){
        if((a[m]+a[p])<=x){
            m++;
            p--;
            k++;
        }
        else{
            p--;
            k++;
        }

    }
    cout<<k;
    
}