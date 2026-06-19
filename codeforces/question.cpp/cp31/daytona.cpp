#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            mpp[p]++;
        }
       if(mpp.find(k)!=mpp.end())cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}