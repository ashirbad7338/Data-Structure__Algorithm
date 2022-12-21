#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int32_t main(){    
    string s;
    cin>>s;
    int len=s.length();
    if(s[0]=='9'){
        for(int i=1; i<len; i++){
            if(s[i]>='5'){
                s[i]='9'-s[i]+'0';
            }
            else{
                continue;
            }
        }
    }
    else{
         for(int i=0; i<len; i++){
            if(s[i]>='5'){
                s[i]='9'-s[i]+'0';
            }
            else{
                continue;
            }
        }
    }
    cout<<s;

}