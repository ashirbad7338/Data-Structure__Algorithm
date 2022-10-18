#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
bool mycmp(pair<int,int> a, pair<int,int> b){
    return (a.second < b.second);
}
int maxactivities(pair<int,int> arr[],int n){
    sort(arr, arr+n, mycmp);
    int prev=0;
    int res=1;
    for(int curr=1; curr<n; curr++){
        if(arr[curr].first >= arr[prev].second){
            res++;
            prev=curr;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    pair<int,int> a[n];
    for(int i=0; i<n; i++){
        cin>>a[i].first;
        cin>>a[i].second;
    }
    cout<<maxactivities(a,n);

}