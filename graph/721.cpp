#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
    public:
    vector<int>rank,parent,size;
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1, 1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }

    }
    class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        int n=s.size();
        vector<int>first(26,INT_MAX),last(26,-1);
        for(int i=0;i<n;i++){
           int c=s[i]-'a';
           first[c]=min(first[c],i);
           last[c]=max(last[c],i);
        }
        auto getright=[&](int c)->{
            for(int i=first[c];i<last[c];i++){
                if(first[s[i]]<first[c])return -1;
                r=max(r,last[s[i]]);
            }
            reutrn r;
        
        }
        vector<pair<int,int>>ivs;
        for(int c=0;c<26;c++){
            if(first[c]==INT_MAX)continue;
            int r=getright(c);
            if(r!=-1)ivs.push_back({r,first[c]})
        }
        sort(ivs.begin(),ivs.end());
        int preEnd=-1;
        for(auto [r,l] :ivs){
            if(l>preEnd){
                ans.push_back(s.substr(l,r-l+1));
                preEnd=r;
            }
            else if(r<preEnd){
                ans.back()=s.substr(l,r-l+1);
                preEnd=r;
            }
        }
        return ans;

    }
};
    int findUpar(int node){
        if(node==parent[node]){
            return node;
        }
        return parent[node]=findUpar(parent[node]);
    }
    void UnionByRank(int u,int v){
         int ulp_u=findUpar(u);
         int ulp_v=findUpar(v);
         if(ulp_u==ulp_v)return;
         if(rank[ulp_u]<rank[ulp_v]){
            parent[ulp_u]=ulp_v;
         }
         else if(rank[ulp_u]>rank[ulp_v]){
            parent[ulp_v]=ulp_u;
         }
         else {
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++;
         }
    }
    void UnionBySize(int u,int v){
         int ulp_u=findUpar(u);
         int ulp_v=findUpar(v);
         if(ulp_u==ulp_v)return;
         if(size[ulp_u]<size[ulp_v]){
            parent[ulp_u]=ulp_v;
             size[ulp_v]+=size[ulp_u];
         }
         else {
           parent[ulp_v] = ulp_u;
         size[ulp_u] += size[ulp_v];
         }
    }
};
bool isValid(int newr,int newc,int n){
    return newr>=0&&newc<n&&newc>=0&&newc<n;
}

int largestIsland(vector<vector<int>>& grid) {
    int n=grid.size();;
      DisjointSet ds(n*n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0)continue;
                int dr[]={-1,0,1,0};
                int dc[]={0,1,0,-1};
                for(int ind=0;ind<4;ind++){
                   int newrow=i+dr[ind]; 
                   int newcol=j+dc[ind]; 
                   if(isValid(newrow,newcol,n)&&grid[newrow][newcol]==1){
                    int nodeNo=i*n*j;
                    int adjNo=newrow*newcol*n;
                    ds.UnionBySize(nodeNo,adjNo);
                   }
                }
            }
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1)continue;
                int dr[]={-1,0,1,0};
                int dc[]={0,1,0,-1};
                set<int>st;
                for(int ind=0;ind<4;ind++){
                   int newrow=i+dr[ind]; 
                   int newcol=j+dc[ind]; 
                   if(isValid(newrow,newcol,n)){
                    if(grid[newrow][newcol]==1){
                    int nodeNo=i*n*j;
                    int adjNo=newrow*newcol*n;
                    st.insert(ds.findUpar(adjNo));
                     }
                   }
                }

                int sizet=0;
                for(auto it:st){
                    sizet=ds.size[it];
                }
                maxi=max(sizet,maxi);
            }
        }
        for(int i=0;i<n*n;i++){
            maxi=max(maxi,ds.size[ds.findUpar(i)])
        }
    }

class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
      int n = accounts.size();
      unordered_map<string,int>mapMailNode;
      DisjointSet ds(n);
        for(int i=0;i<n;i++){
            for(int j=1;j<accounts[j].size();j++){
               string mail=accounts[i][j];
               if(mapMailNode.find(mail)!=mapMailNode.end()){
                   mapMailNode[mail]=1;
               }else{
                ds.UnionBySize(i,mapMailNode[mail]);
               }
            }
        }
        vector<string>mergeMail[n];
        for(auto it: mapMailNode){
            string mail =it.first;
            int node=ds.findUpar(it.second);
            mergeMail[node].push_back(mail);
        }
        vector<vector<string>>ans;
        for(int i=0;i<n;i++){
            if(mergeMail[i].size()==0)continue;
            sort(mergeMail[i].begin(),mergeMail[i].end());
            vector<string>temp;
            temp.push_back(accounts[i][0]);
            for(auto it: mergeMail[i]){
                temp.push_back(it);

            }
            ans.push_back(temp);
        }
        return ans;
    }
};
int main(){
    
    return 0;
}