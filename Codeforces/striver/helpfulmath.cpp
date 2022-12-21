#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,t,u;
    cin>>s;
    for(int i=0; i<s.length(); i=i+2){
        t.push_back(s[i]);
    }
    sort(t.begin(),t.end());
    u.push_back(t[0]);
    for(int i=1; i<t.length(); i++){
       u.push_back('+');
       u.push_back(t[i]);
    }
    cout<<u;
}