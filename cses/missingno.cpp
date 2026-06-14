#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int maxi=1;
    int count=1;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1])count+=1;
        else count=1;
        maxi=max(count,maxi);
    }
    cout<<maxi<<endl;
    return 0;
}