#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            mpp[p]++;
        }
        if(mpp.size()>=3){
          cout<<"NO"<<endl;
          continue;
        }else{
            if(mpp.size()==1){
               cout<<"YES"<<endl;
            }
            int t=0,p=0;
            if(mpp.size()==2){

               for(auto it: mpp){
                   p=t;
                   t=it.second;
               }
               if(t==n/2||t==(n+1)/2){
                cout<<"YES"<<endl;
               }
               else {
                  cout<<"NO"<<endl;
               }
               
            }

        }
             
        
    }
    return 0;
}