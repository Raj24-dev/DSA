#include<bits/stdc++.h>
using namespace std;
int dela(int n,int k,int f,vector<vector<int>>arr){
    sort(arr.begin(),arr.end(),[](auto &a,auto &b){
        return a[1]<b[1];
    });
    int total=0;int delay=0;int count=0;
    int length=0;
    for(auto it: arr){
      total+=it[0];
      length++;
      count++;
      if(total>it[1]){
          delay=max(delay,(total-it[1]));
        }
      if(count==k&&length!=n){
        count=0;
        total+=f;
      }
    }
    return delay;
}
int main(){
    int n,k,f;
    cin>>n>>k>>f;
    vector<vector<int>>arr;
    while(n--){
        int p,q;
        cin>>p>>q;
        arr.push_back({p,q});

    }
    cout<<dela(n,k,f,arr);
    return 0;
}