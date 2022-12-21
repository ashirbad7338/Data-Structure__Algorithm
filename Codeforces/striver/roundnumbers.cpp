#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        vector<int> a;
        while(x!=0){
            a.push_back(x%10);
            x=x/10;
        }
        int dig=0;
        int s=a.size();
        for(int i=0; i<s; i++){
            if(a[i]!=0){
                dig++;
            }
        }
        cout<<dig<<endl;
        for(int i=0; i<s; i++){
            if(a[i]!=0){
                cout<<a[i]*pow(10,i)<<" ";
            }
        }
        cout<<endl;

    }
}