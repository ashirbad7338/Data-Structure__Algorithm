#include <iostream>
using namespace std;
//Naive solution
//Time=O(n^2)
void movetoend(int arr[],int n){
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            for(int j=i+1; j<n; j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                }
            }
        }
    }

}
//Efficient Solution
//Time=O(n)
void moveend(int arr[],int n){
    int count=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    //movetoend(a,n);
    moveend(a,n);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}