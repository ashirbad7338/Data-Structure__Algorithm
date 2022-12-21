#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void BFSD(vector<int> a[],int v,int s,bool vis[]){
    queue<int> q;
    vis[s]=true;
    q.push(s);
    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        for(int v : a[u]){
            if(vis[v]==false){
                vis[v]=true;
                q.push(v);
            }
        }
    }
}
void addedge(vector<int> a[],int x,int y){
    a[x].push_back(y);
    a[y].push_back(x);

}
void printgraph(vector<int> adj[],int v){
    for(int i=0; i<v; i++){
        for(int x : adj[i]){
            cout<<x<<" ";        
        }
        cout<<endl;
    }
}
int main(){
    int v;
    cin>>v;
    vector<int> a[v];
    addedge(a,0,1);
    addedge(a,0,2);
    addedge(a,1,2);
    addedge(a,1,3);
    printgraph(a,v);

}