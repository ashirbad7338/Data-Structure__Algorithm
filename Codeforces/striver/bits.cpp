#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,k=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="X++" or s=="++X"){
            k++;
        }
        else{
            k--;
        }
    }
    cout<<k-0;
}
