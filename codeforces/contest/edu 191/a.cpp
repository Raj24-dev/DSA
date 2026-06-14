#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
        while(t--){
           long long n,x,y,z;
           cin>>n>>x>>y>>z;
           if(n<=z*x){
            cout<<(n+x+y-1)/(x+y)<<endl;
            continue;
           }
           long long t1=0;long long t2=0;
           t1=((n+x+y-1)/(x+y));
           t2=z+(n+x+10*y-1-(z*x))/(x+10*y);
           long long t3;
           t3=min(t1,t2);
           cout<<t3<<endl;
        }
    
    return 0;
}