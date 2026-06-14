#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int mini=INT_MAX;
    for(int i=0;i<m-n+1;i++){
        int diff=arr[i+n-1]-arr[i];
        mini=min(mini,diff);
    }
    cout<< mini;
    return 0;
}