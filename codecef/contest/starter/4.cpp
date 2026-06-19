#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int t=0;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            t|=arr[i];
        }
        int count=0;
        int or1=0;
        for(int i=0;i<n;i++){
              or1|=arr[i];
                if(or1==t){
        count++;
        or1=0;
    }
}
        cout<<n-count<<endl;


    }
    return 0;
}