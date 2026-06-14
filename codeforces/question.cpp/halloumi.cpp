#include<bits/stdc++.h>
using namespace std;
 bool sorted(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i+1<n;i++){
          if(arr[i]>arr[i+1])return false;
    }
    return true;
 }
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

        if(k>=2){
            cout<<"YES"<<endl;

        }else{
          sorted(arr)?cout<<"YES"<<endl:cout<<"NO"<<endl;
        }

    }
    return 0;
}