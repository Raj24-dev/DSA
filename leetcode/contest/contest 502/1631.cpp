#include<bits/stdc++.h>
using namespace std;
 int minimumEffortPath(vector<vector<int>>& heights) {
      int n=heights.size();
      int m=heights[0].size();
      if(n==1&&m==1)return 0;

      priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
      vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
      pq.push({0,{0,0}});
      dist[0][0]=0;
      int dr[]={-1,0,1,0};
      int dc[]={0,1,0,-1}; 
      while(!pq.empty()){
        auto it=pq.top();
        pq.pop();
        int diff=it.first;
        int r=it.second.first;
        int c=it.second.second;
        if(r==n-1&&c==m-1)return diff;
        for(int i=0;i<4;i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<m){
                int neweffort=max(abs(heights[nr][nc]-heights[r][c]),diff);
                 if(neweffort<dist[nr][nc]){

                     pq.push({dist[nr][nc],{nr,nc}});            
                 }
            }
        }

      }
      return 0;
      
    }
    
int main(){
    
    return 0;
}