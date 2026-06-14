#include<bits/stdc++.h>
using namespace std;
void cyclsort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        while(arr[i]!=arr[arr[i]-1]){
         swap(arr[i],arr[arr[i]+1]);
        }
    }
}
int main(){
    int t;cin>>t;
    while(t--){
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cyclsort(arr);
  for(int i=0;i<n;i++){
    
  }
    }
    return 0;
}