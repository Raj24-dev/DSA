#include<bits/stdc++.h>
using namespace std;
bool detect(int src,vector<int>adj[],vector<int>&vis){
    vis[src]=1;
    queue<pair<int,int>>q;
    q.push({src,-1});
    while(!q.empty()){
        int node=q.front().first; 
        int parent =q.front().second;
        q.pop();
        for(auto it: adj[node]){
            if(!vis[it]){
                q.push({it,node});
                vis[it]=1;
            }
            else if(vis[it]==1&& parent!=it){
                return true;
            }
        }
    }
    return false;
}
bool isCycle(int v,vector<int>adj[]){
    
    
      vector<int>vis(v,0);
      for(int i=0;i<v;i++){
          if(!vis[i]){
            if(detect(i,adj,vis)==1){
              return true;
            }
          }
      }
      return false;
}
int main(){
    vector<int>adj[]={
        {1,2},
        {0,2},
        {0,1}
    };
    cout<<isCycle(3,adj);
    return 0;
}