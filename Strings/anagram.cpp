/*
I/P : s1="listen"
      s2="silent"
O/P : 1

I/P : s1="aab"
      s2="bab"
O/P : 0
*/
#include <iostream>
#include <string>
using namespace std;
//Naive
//O(nlogn)
bool isanagram1(string &s1,string &s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);
}
//Efficient 
//O(n)
const int CHAR =256;
bool isanagram2(string &s1,string &s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    int count[CHAR]={0};
    for(int i=0; i<s1.length(); i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0; i<CHAR; i++){
        if(count[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    cout<<isanagram1(a,b)<<endl;
    cout<<isanagram2(a,b);

}
