#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int len=s.length();
        string s1=s;
        reverse(s1.begin(),s1.end());
        string s2=s+s1;
        cout<<s2<<endl;
    }
}