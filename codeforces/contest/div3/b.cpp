#include<bits/stdc++.h>
using namespace std;
// int cost(string s){
//     int count=0;
//     if(s=)
// }

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cost=0;
       while(n--) {
        char c;
        cin>>c;
        if(c=='(')cost++;
        if(c==')')cost--;
    }
    if(cost==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
        
    }
    return 0;
}