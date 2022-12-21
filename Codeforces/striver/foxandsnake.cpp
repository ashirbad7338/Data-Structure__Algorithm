#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    char a[x][y];
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            if(i%4==1){
                if(j==y-1){
                    a[i][j]='#';
                }
                else{
                    a[i][j]='.';
                }
            }
            if(i%4==3){
                if(j==0){
                    a[i][j]='#';
                }
                else{
                    a[i][j]='.';
                }
            }
            else{
                a[i][j]='#';
            }
        }
    }
    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            cout<<a[i][j];
        }
    }
}