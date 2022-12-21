#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool islucky(int x){
    vector<int> v;
    int k=x,rem,dig=0;
    if(x==0){
        return false;
    }
    while(x!=0){
        rem=x%10;
        if(rem==4 or rem==7){
            v.push_back(rem);
        }
        dig++;
        x=x/10;
    }
    return(dig==v.size());
}
int main(){
    string s;
    int luk=0;
    cin>>s;
    int len=s.length();
    for(int i=0; i<len; i++){
        if(s[i]=='4' or s[i]=='7'){
            luk++;
        }
    }
    if(islucky(luk)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}