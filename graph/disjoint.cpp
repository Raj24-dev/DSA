#include<bits/stdc++.h>
using namespace std;
class DisjointSet{
    vector<int>rank,parent,size;
    public:
    DisjointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1, 1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }

    }
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
int main(){
    DisjointSet ds(7);
    ds.UnionBySize(1,2);
    ds.UnionBySize(2,3);
    ds.UnionBySize(4,5);
    ds.UnionBySize(6,7);
    ds.UnionBySize(5,6);
    if(ds.findUpar(3)==ds.findUpar(7)){
        cout<<"same";
    }else cout<<"not";
    ds.UnionBySize(3,5);
    if(ds.findUpar(3)==ds.findUpar(7)){
        cout<<"same";
    }else cout<<"not";
   
    return 0;
}