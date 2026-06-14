#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            maxi=max(maxi,p);
            mini=min(mini,p);
        }
        int r=(maxi+1)-mini;
        cout<<r<<endl;
    }
    return 0;
}