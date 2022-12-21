#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    int k=0;
    string a[5];
    cin>>s;
    for(int i=0; i<5; i++){
        cin>>a[i];
    }
    for(int i=0; i<5; i++){
        if(a[i][0]==s[0] || a[i][1]==s[1]){
            k++;
        }
    }
    if(k!=0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}