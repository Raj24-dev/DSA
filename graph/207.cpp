#include<bits/stdc++.h>
using namespace std;
bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<vector<int>>adj(n);
        vector<int>indegree(n,0);
        for(auto it: prerequisites){
            adj[it[0]].push_back(it[1]);
             indegree[it[1]]++;
        }
       
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0)q.push(i);
        }
        int count=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            count++;
            for(auto it: adj[node]){
                indegree[it]--;
                if(indegree[it]==0)q.push(it);
            }
        }
        return count==n;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
      vector<int>indegree(numCourses,0);
      vector<vector<int>>adj(numCourses);

      for(auto it : prerequisites){
        adj[it[1]].push_back(it[0]);
        indegree[it[0]]++;
      }
      queue<int>q;
      for(int i=0;i<numCourses;i++){
        if(indegree[i]==0)q.push(i);
      }
      vector<int>ans;
      while(!q.empty()){
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it]==0)q.push(it);
        }
      }
      return (ans.size()==numCourses)?ans:vector<int>();
    }
int main(){
    int n=2;
    vector<vector<int>>v={
        {1,0}
       
    };
vector<int>res=findOrder(n,v);
    for(auto x:res )cout<<x<<" ";
    
    return 0;
}