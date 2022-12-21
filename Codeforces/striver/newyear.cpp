#include <iostream>
using namespace std;
int main(){
    int a[3];
    for(int i=0; i<3; i++){
        cin>>a[i];
    }
    sort(a,a+3);
    int k=a[2]-a[0];
    cout<<k;
}