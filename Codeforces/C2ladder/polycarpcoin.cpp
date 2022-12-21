#include <iostream>
using namespace std;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int c;
        cin>>c;
        if(c%3==0){
            cout<<c/3<<" "<<c/3<<endl;
        }
        else if(c%3==1){
            cout<<(c/3)+1<<" "<<c/3<<endl;
        }
        else{
            cout<<(c/3)<<" "<<(c/3)+1<<endl;
        }
    }
}