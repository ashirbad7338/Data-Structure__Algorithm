#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s[0]>=97 and s[0]<=122){
        s[0]=s[0]-32;
    }
    cout<<s;
}