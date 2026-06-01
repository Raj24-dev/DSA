#include<bits/stdc++.h>
using namespace std;
vector<int> bfsOfGraph(int V,vector<int>adj[]){
     int vis[V]={0};
     vis[0]=1;
     queue<int>q;
     q.push(0);
     vector<int>bfs;
     while(!q.empty()){
        int node =q.front();
        q.pop();
        bfs.push_back(node);
        for(auto it : adj[node]){
            if(!vis[it]){
                vis[it]=1;
                q.push(it);
            }
        }
     }
     return bfs;

}
void bfs(int start,vector<vector<int>>& isConnected,vector<int>vis){
    
     int n =isConnected.size();
         vis[start]=1;
         queue<int>q;
         q.push(start);
         while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int i=0;i<n;i++){
                if(isConnected[node][i]==1&&!vis[node]){
                    vis[i]=1;
                     q.push(i);
                }
            }
         }
}
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count=0;
        int n =isConnected.size();
         vector<int>vis(n,0);
   for(int i=0;i<n;i++){ 
        if(!vis[i]){
            count++;
            bfs(i,isConnected,vis);
        }
    }
        return count;
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int n =grid.size();
        int m=grid[0].size();
        int count=0;vector<vector<int>>vis(n,vector<int>(m,0));
         queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else{
                     vis[i][j]=0;
                }
            }
        }
        int tm=0;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
       while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second;
        q.pop();
        tm=max(tm,t);
        for(int i=0;i<4;i++){
            int nrow = r+delrow[i];
            int ncol = c+delcol[i];
            if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&grid[nrow][ncol]==1&&!vis[nrow][ncol]){
                q.push({{nrow,ncol},t+1});
                vis[nrow][ncol]=2;
            }
        }

       }
       return tm;
        
    }

int main(){
    vector<vector<int>>adj={
        {2,1,1},
        {1,1,0},
        {0,1,1}
    };
    cout<<orangesRotting(adj);
    return 0;
}