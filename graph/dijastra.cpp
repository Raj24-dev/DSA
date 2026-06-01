#include<bits/stdc++.h>
using namespace std;
 vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
       vector<int>dist(V,1e9);
       dist[src]=0;
       pq.push({0,src});
      while(!pq.empty()){
        int dist=pq.top().first;
        int node=pq.top().second;
        for(auto it : adj[node]){
            int edgewt=it[1]
        }
      }

       i
    }
int main(){
    
    return 0;
}