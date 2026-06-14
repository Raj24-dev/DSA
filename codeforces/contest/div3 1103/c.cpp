#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
   cin>>t;
    while(t--){
        long long a,b,x;
        cin>>a>>b>>x;
        int op=0;
    int ans=abs(a-b);
    while(a>0||b>0){
        if(a==b){
            break;
        }
        else if(a>b){
            a=(a/x);
            op++;
        }
        else if(b>a){
            b=(b/x);
            op++;
        }
        int cost=op+abs(a-b);
        ans=min(ans,cost);
    }
    cout<<ans<<endl;

    }
    return 0;
}