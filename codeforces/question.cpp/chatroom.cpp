#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string p="hello";
    int n=0;
    for(auto it: s){
        if(it==p[n])n++;
    }
    n>=5?cout<<"YES"<<endl:cout<<"NO"<<endl;
}