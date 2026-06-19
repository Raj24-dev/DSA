#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int totalempty=0;
        for(auto it:s){
            if(it=='.')totalempty++;
            
        }
       if (s.find("...") != string::npos) {
            cout << 2 << endl;
        } else {
            cout << totalempty << endl;
        }
    }
    return 0;
}