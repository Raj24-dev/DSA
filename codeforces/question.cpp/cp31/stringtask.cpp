#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    string ans;
    int j=0;
    for(auto ch:s){
        if(ch != 'a' || ch != 'e' || ch != 'i' || ch != 'o' || ch != 'u'|| ch != 'A' || ch != 'E' || ch != 'I' || ch != 'O' || ch != 'U'){
            ans[j++]="."+ch;
        }
    }
    for(auto ch: ans){
        cout<<ch;
    }
    return 0;
}