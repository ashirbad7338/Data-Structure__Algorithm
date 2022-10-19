//Palindrome check
#include <iostream>
#include <string>
using namespace std;
//Naive method
bool ispal1(string &str){
    string rev=str;
    reverse(rev.begin(),rev.end());
    return (rev==str);
}
//Efficient method
bool ispal2(string &str){
    int begin=0;
    int end=str.length()-1;
    while(begin<end){
        if(str[begin]!=str[end]){
            return false;
        }
        begin++;
        end--;
    }
    return true;
}
int main(){
    string a;
    cin>>a;
    cout<<ispal1(a)<<endl;
    cout<<ispal2(a)<<endl;
    return 0;
}