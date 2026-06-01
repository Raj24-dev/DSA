#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,s;
        cin>>n>>x>>s;
         string u;
         cin>>u;
         int empty=x;
         int pSeats=0;
         int ans=0;
         for(auto it:u){
            if(it=='I'){
                if(empty>0){
                    ans++;
                    pSeats+=(s-1);
                    empty--;
                }
            }
            else if(it=='E'){
                if(pSeats>0){
                    pSeats--;
                    ans++;
                }
            }
            else if(it=='A'){
                if(pSeats>0){
                    ans++;
                    pSeats--;
                }
                else if(empty>0){
                    empty--;
                    ans++;
                     pSeats+=(s-1);
                }
            }
         }
         cout<<ans<<endl;
        
       
     
    }
    return 0;
}