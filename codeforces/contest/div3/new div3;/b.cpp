#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool s = true;
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                s = false;
                break;
            }
        }
        if(s)cout<<n<<endl;
        else cout<<1<<endl;
    }
    return 0;
}