#include <iostream>
using namespace std;
int32_t main(){
    int l,b,y=0;
    cin>>l>>b;
    while(l<=b){
        l=l*3;
        b=b*2;
        y++;
    }
    cout<<y;
}