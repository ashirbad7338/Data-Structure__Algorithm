#include <iostream>
#include <vector>
using namespace std;
void DFSrec(vector<int> adj[],int s,bool vis[]){
    vis[s]=true;
    cout<<s<<" ";
    for(int u : adj[s]){
        if(vis[u]==false){
            DFSrec(adj,u,vis);
        }
    }
}
void DFS(vector<int> adj[],int v){
    bool vis[v];
    for(int i=0; i<v; i++){
        vis[i]=false;
    }
    for(int i=0; i<v; i++){
        if(vis[i]==false){
            DFSrec(adj,i,vis);
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
    DFS(a,v);

}
