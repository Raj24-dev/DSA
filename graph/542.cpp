#include<bits/stdc++.h>
using namespace std;
 vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n =mat.size();
        int m =mat[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>> dist(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
                else {
                    vis[i][j]=0;
                }
            }
        }
        while(!q.empty()){
            int r=q.front().first.first;
            int c=q.front().first.second;
            int d=q.front().second;
          q.pop();
          dist[r][c]=d;
          for(int i=-1;i<=1;i++){
            for(int j=-1;j<=1;j++){
                if(abs(i)+abs(j)!=1)continue;
                int nrow=i+r;
                int ncol=j+c;
                if(nrow>=0&&nrow<n&&ncol>=0&&ncol<m&&!vis[nrow][ncol]){
                    q.push({{nrow,ncol},d+1});
                    vis[nrow][ncol]=1;
                }
            }
          }
        }
        return dist;
    }
     vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        queue<vector<string>>q;
        q.push({beginWord});
        unordered_set<string>st(wordList.begin(),wordList.end());
        st.erase(beginWord);
        vector<string> usedonLevel;
        vector<vector<string>>ans;
        int level=0;
        usedonLevel.push_back(beginWord);
        while(!q.empty()){
          vector<string> vec=q.front();
         q.pop();
          if(vec.size()>level){
            level++;
            for(auto it : usedonLevel){
                st.erase(it);
            }
        }
        string word =vec.back();
        if(word==endWord){
            if(ans.size()==0){
                ans.push_back(vec);
            }else if(ans[0].size()==vec.size()){
                ans.push_back(vec);
            }
        }
        for(int i=0;i<=word.size();i++){
            char original = word[i];
            for(char ch='a';ch<='z';ch++){
                word[i]=ch;
                if(st.find(word)!=st.end()){
                    vec.push_back(word);
                    q.push(vec);
                    usedonLevel.push_back(word);
                    vec.pop_back();
                }
            }
            word[i]=original;

        }
        }
        return ans;
        
    }
int main(){
    vector<vector<int>>adj={
        {0,0,0},
        {0,1,0},
        {1,2,1}
    };
    vector<vector<int>> dist=updateMatrix(adj);
    for(int i=0;i<adj.size();i++){
        for(int j=0;j<adj[0].size();j++){
            cout<<dist[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}