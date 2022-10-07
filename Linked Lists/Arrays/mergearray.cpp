#include <iostream>
using namespace std;
void merge(int a[],int b[],int m,int n){
    int c[m+n];
    for(int i=0; i<m; i++){
        c[i]=a[i];
    }
    for(int i=0; i<n; i++){
        c[m+i]=b[i];
    }
    sort(c,c+m+n);
    for(int i=0; i<m+n; i++){
        cout<<c[i]<<" ";
    }
}
