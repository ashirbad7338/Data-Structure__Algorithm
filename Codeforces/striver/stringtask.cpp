#include <iostream>
#include <string>
using namespace std;
int main(){
    string a,b,c;
    cin>>a;
    int len=a.length();
    for(int i=0; i<len; i++){
        if(a[i]>=65 and a[i]<=90){
            a[i]=a[i]+32;
        }
        if(a[i]!='a'and a[i]!='e' and a[i]!='i' and a[i]!='o' and a[i]!='u'){
            b.push_back(a[i]);
        }
    }
    for(int i=0; i<b.length();  i++){
        c.push_back('.');
        c.push_back(b[i]);
    }
    cout<<c;

}