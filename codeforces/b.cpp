#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a;
        cin>>a;
        int cost=0;
        while(a--){
            char c;
            cin>>c;
            if(c=='(' ){
                cost++;
            }
            else if(c==')'){
                cost--;
            }
        } 
        if(cost==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
    }
}
    return 0;
}