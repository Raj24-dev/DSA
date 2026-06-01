// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;
//     //undirceted graph
//     vector<int>adj[n+1];
//     for(int i=0;i<n;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
//O(E) time complexity
int main(){
    int n,m;
    cin>>n>>m;
    //dirceted graph
    vector<int>adj[n+1];
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
       // adj[v].push_back(u);
    }
    return 0;
}