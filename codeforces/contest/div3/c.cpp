#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n),arr2;
        for(int i=0;i<n;i++){
           cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]%6==0)arr2.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0&&arr[i]%6!=0)arr2.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]%3!=0&&arr[i]%2!=0&&arr[i]%6!=0)arr2.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]%3==0&&arr[i]%2!=0&&arr[i]%6!=0)arr2.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
           cout<<arr2[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}