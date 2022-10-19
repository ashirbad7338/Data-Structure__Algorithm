#include <iostream> 
#include <string>
using namespace std; 

const int CHAR=256;
int leftMost(string &str) 
{
    int fIndex[CHAR]={0};
    fill(fIndex,fIndex+CHAR,-1);
    int res=INT_MAX;
    for(int i=0;i<str.length();i++){
        int fi=fIndex[str[i]];
        if(fi==-1)
        fIndex[str[i]]=i;
        else
        res=min(res,fi);
    }
    
    return (res==INT_MAX)?-1:res;
}
 
int main() 
{ 
    string str = "geeksforgeeks";
    cout<<"Index of leftmost repeating character:"<<endl;
    cout<<leftMost(str)<<endl;  
    
    return 0; 
} 