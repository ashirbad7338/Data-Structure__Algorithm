#include <iostream>
using namespace std;
int32_t search(int a[],int b[],int m,int n,int k){
    int t=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
          if(k>a[i]){
             if(a[i]>=b[j] and a[i]<=b[j]){
                t++;
            }
        }
        else{
            if((a[i]+k)>=b[j] and (a[i]-k)<=b[j]){
                t++;
            }
        }
        
    }
    return t;
}
int32_t main(){
    int m,n,k;
    cin>>m>>n>>k;
    int a[m],b[n];
    for(int p=0; p<m; p++){
        cin>>a[p];
    }
    for(int q=0; q<n; q++){
        cin>>b[q];
    }
    cout<<search(a,b,m,n,k);

}