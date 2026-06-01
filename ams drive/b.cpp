#include<bits/stdc++.h>
using namespace std;

string winner(int n1,vector<vector<int>>arr1,int n2,vector<vector<int>>arr2){
    long long p1=0;
 for(auto it: arr1){
   p1*=pow(it[0],it[1]);
 }
    long long p2=0;
 for(auto it: arr2){
   p2*=pow(it[0],it[1]);
 }
sort(arr1.begin(),arr1.end());
sort(arr2.begin(),arr2.end());
int count=0;
for(int i=n1-1;i>=0;i++){
  p2/=arr1[i][0];
  count++;
}
if(count%2==0)return "Bob";
else return "Alice";

 
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n1;
        cin>>n1;
        vector<vector<int>>arr1;
        while(n1--){
          int p,q;
          cin>>p>>q;
          arr1.push_back({p,q});
        }
        int n2;
        cin>>n2;
       
        vector<vector<int>>arr2;
        while(n1--){
          int p,q;
          cin>>p>>q;
          arr2.push_back({p,q});
        }
       cout<<winner(n1,arr1,n2,arr2)<<endl;
    }
}