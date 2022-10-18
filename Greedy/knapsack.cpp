#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;
bool mycmp(pair<int,int> a,pair<int,int> b){
    double r1 = a.first/a.second;
    double r2 = b.first/b.second;
    return r1>r2;
}
double fknaps(int w, pair<int,int> arr[], int n){
    sort(arr,arr+n,mycmp);
    double res=0.0;
    for(int i=0; i<n; i++){
        if(arr[i].second<=w){
            res += arr[i].first;
            w = w - arr[i].second;
        }
        else{
            res=res+ arr[i].first*(w/arr[i].second);
            break; 
        }
    }
}
int main(){
    int n;
    cin>>n;
    pair<int,int> a[n];
    int w;
    cin>>w;
    for(int i=0; i<n; i++){
        cin>>a[i].first;
        cin>>a[i].second;
    }
    cout<<fknaps(w,a,n);
}