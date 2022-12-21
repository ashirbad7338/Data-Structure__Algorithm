#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[4];
        for(int i=0; i<4; i++){
            cin>>a[i];
        }
        int max1=a[0],max2=a[0];
        for(int i=1; i<4; i++){
            if(a[i]>=max1){
                max2=max1;
                max1=a[i];
                if(a[i+1]==max2)
                
            }
            
        }
        for(int i=0; i<4; i++){
            if(a[i]==max1){
                
            }
        }
    }
}