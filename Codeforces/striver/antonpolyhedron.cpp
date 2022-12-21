#include <iostream>
#include <string>
using namespace std;
int main(){
    int n,k=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s=="Icosahedron"){
            k=k+20;
        }
        if(s=="Cube"){
            k=k+6;
        }
        if(s=="Octahedron"){
            k=k+8;
        }
        if(s=="Dodecahedron"){
            k=k+12;
        }
        if(s=="Tetrahedron"){
            k=k+4;
        }
    }
    cout<<k;
}