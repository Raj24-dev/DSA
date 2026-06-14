#include<bits/stdc++.h>
using namespace std;
bool possible(int x,int y){
    if(x%2==0&&y%2==0)return 1;
    else if(x%2==0&&y%2!=0)return 1;
    else if(x%2!=0&&y%2==0)return 1;
    else return 0;
}
int main(){
    int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    if(possible(x,y))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
    return 0;
}