#include <iostream>
using namespace std;
int32_t main(){
    int i,n;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++){
        cin>>a[i];
    }
    int count=1,max=1;
    for(i=1; i<n; i++){
        if(a[i]>a[i-1]){
            count++;
        }
        else{
            if(count>max){
                max=count;
            }
            count=1;
        }
    }
    if(count>max){
        max=count;
    }
    cout<<max;
    
}