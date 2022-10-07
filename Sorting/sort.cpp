#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={1,43,32,67,9};
    sort(arr,arr+5);
    for(auto x : arr){
        cout<<x<<" ";
    }
}