#include <iostream>
using namespace std;
long long int sum(int y){
    long long int s=0,p=1;
    for(int i=y; i>0; i--){
        s = s + p*i;
        p++;
    }
    return s;
}
int32_t main(){
    int x,i=1;
    cin>>x;
     while(sum(i+1)<=x){
         i++;
     }
    cout<<i;
}