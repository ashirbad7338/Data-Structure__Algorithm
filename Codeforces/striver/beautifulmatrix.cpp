#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a;
    vector<vector<int> > v;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>a;
            v.push_back(a);
        }
       
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5;  j++){
            cout<<v[i][j];
        }
    }
}