#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int key,ind;
    cin>>key;
    for(int i=0; i<n; i++){
        if(a[i]==key){
            ind=i;
        }
    }
    cout<<key<<" is located at "<<ind+1<<" position in array ";
}