/*
I/P : s1="ABCDEF"
      s2="ADE"
O/P : 1

I/P : s1="ABCDEF"
      s2="BFD"
O/P : 0
*/
#include <iostream>
#include <string>
using namespace std;
bool issubseq(string &s1, string &s2,int m,int n){
    int j=0;
    if(m<n){
        return false;
    }
    for(int i=0; i<m and j<n; i++){
        if(s1[i]==s2[j]){
            j++;
        }
    }
    return (j==n);
}
int main(){
    string a,b;
    int m,n;
    cin>>a;
    cin>>b;
    m=a.length();
    n=b.length();
    cout<<issubseq(a,b,m,n);
}