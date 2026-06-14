#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cost=0;
        stack<char>st;
        for(int i=0;i<n;i++){
           if(s[i]=='(')st.push('(');
           else{
            if(st.empty()){
                cout<<"yes";
            }
           }
        }
    }
    return 0;
}