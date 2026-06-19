#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=1;i<n;i++){
            if(arr[i-1]>arr[i]){
                long long temp=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]+=temp;
            }
        }
        long long maxi=*max_element(arr.begin(),arr.end());
        cout<<maxi<<endl;
    }
    return 0;
}