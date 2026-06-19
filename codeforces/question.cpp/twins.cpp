#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int tsum=accumulate(arr.begin(),arr.end(),0);
    int sum=0;
    for(int i=n-1;i>=0;i--){
      tsum-=arr[i];
      sum+=arr[i];
      if(sum>tsum){
        cout<<n-i<<endl;
        break;
      }
    }
    return 0;
}