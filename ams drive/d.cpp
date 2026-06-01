#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>arr;
      for(int i=0;i<n;i++){
        int p;
        cin>>p;
        arr.push_back(p);
      }
     vector<int>ans;
     int flip=0;
     for(int i = n-1; i >= 0; i--) {
            int q= (flip % 2 == 0) ? arr[i] : -arr[i];
            if(q > 0) {
                ans.push_back(i+1);
                flip++;
            }
        }
     cout<<flip<<endl;
     if(ans.empty())cout<<endl;
     else {
        for(int i=0;i<ans.size();i++){
       cout<<ans[i]<<" ";
        }
     }
    
    }
    return 0;
}