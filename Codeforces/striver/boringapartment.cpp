#include <iostream>
#include <string>
using namespace std;
long long int digit(int x){
    long long int dig=0;
    while(x!=0){
        dig++;
        x=x/10;
    }
    return dig;
}
int32_t main(){
    int k;
    cin>>k;
    while(k--){
        int n;
        cin>>n;
        int k=((n%10)-1)*10;
        if(digit(n)==1){
            k=k+1;
        }
        else if(digit(n)==2){
            k=k+3;
        }
        else if(digit(n)==3){
            k=k+6;
        }
        else{
            k=k+10;
        }
        cout<<k<<endl;
    }   
}