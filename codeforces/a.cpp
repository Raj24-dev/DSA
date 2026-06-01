#include<bits/stdc++.h>
using namespace std;
 bool yousef(int a, int b){
     if(a%2==0 && b%2==0) return true;
     if(a%2==0 && b%2==1) return true;  
     if(a%2==1 && b%2==0) return true;  
        return false;
 }
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(yousef(a,b)) {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    }
    return 0;
}