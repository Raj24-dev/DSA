#include<bits/stdc++.h>
using namespace std;
string tatar(int n, int k, string s) {
    vector<int> cnt(k, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') cnt[i % k]++;
    }
    for (int i = 0; i < k; i++) {
        if (cnt[i] % 2 != 0)cout<< "NO"<<endl;
    }
    cout<< "Yes"<<endl;
}
int main(){
    int t;
  cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i] == '1'&&i+k<n){
             s[i]=   invert(s[i]);
             s[i+k]=   invert(s[i+k]);
            }
        }
        bool flag =false;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                flag=true;
                  break;
        }
        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}