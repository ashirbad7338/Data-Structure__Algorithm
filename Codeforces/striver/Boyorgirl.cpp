#include <iostream>
#include <string>
using namespace std;
int bog(string s){
    int res=1;
    for(int i=1; i<s.length(; i++){
        if(s[i]!=s[res-1]){
            s[res]=s[i];
            res++;
        }
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    if(bog(s)%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}
