#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int tsum= (accumulate(arr.begin(),arr.end(),0)/2);
        sort(arr.begin(),arr.end());
       int l=0,r=n-1;
       int count=0;
       while(l<r){
       int sum=tsum+arr[l]/2+arr[r]/2;
        if(sum<=k){
           l++;
        }else{
        count+=(r-l);
         r--;
        }
       }
       cout<<count<<endl;
    }
    return 0;
}