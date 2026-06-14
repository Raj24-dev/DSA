#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int awake =0,w=0;
   for(int i=0;i<n;i++){
    if(s[i]=='1'){
     awake++;
       w =k;
    }
    else if(w>0){
        awake++;
        w--;
     }
    }
     cout<<n-awake<<endl;
   }
    return 0;
}