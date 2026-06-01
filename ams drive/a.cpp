#include<bits/stdc++.h>
using namespace std;
const long long MOD= 1e9+7;
int prob(int a ,int b,int n){
    long long total =pow(2,n);
    double pro=a/b;
    double tail=1.0-pro;
   long long ans=0;
   for(int i=0;i<=(n-i+1)/2;i++){
       long long ways;
       for(int j=0;j<i;i++){
        ways+=(n-i-j+1)/(j+1);
       }
       ans+=((ways)%MOD*(pow(pro,i)%MOD)*(pow(tail,i)%MOD))%MOD;
   }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int q=n;
        vector<int>arr(n);
        while(n--){
          int p;
          cin>>p;
          arr.push_back(p);
        }
       cout<<last(arr,q)<<endl;
    }
}