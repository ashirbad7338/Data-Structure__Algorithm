#include <iostream>
//#include <vector>
//#include <string>
#include <algorithm>
using namespace std;

void solve(int* sizes, int* applicants, int m, int n, int k) {
    int apts=0;
    int j=0, i=0;
    while(i<n && j<m) {
        if (sizes[j]>=applicants[i]-k && sizes[j]<=applicants[i]+k){
            apts+=1;
            j+=1;
            i+=1;
        }
        else {
            if (sizes[j]<applicants[i]-k){
                j+=1;
            }
            
            else {
                i+=1;
            }
        }
    }
    cout<<apts<<endl;
}

int main(){
    cin.tie(0); ios_base::sync_with_stdio(0);
    int n, m, k;
    cin>>n>>m>>k;
    int applicants[n];
    for (int i=0; i<n; i++) {
        cin>>applicants[i];
    }
    int sizes[m];
    for (int i=0; i<m; i++) {
        cin>>sizes[i];
    }
    sort(sizes, sizes+m);
    sort(applicants, applicants+n);
    solve(sizes, applicants, m, n, k);
}