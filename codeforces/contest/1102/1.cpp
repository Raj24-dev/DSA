#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        if(n==2){
            cout<<arr[0]<<" "<<arr[1]<<endl;
            continue;
        }
       int i=0;
            for( i=0;i+1<n;i++){
                if(arr[i]==arr[i+1])break;
            }
            if(i+1<n){
                cout<<-1<<endl;
                continue;
            }
            for(i=0;i+2<n;i++){
                if(arr[i]%arr[i+1]!=arr[i+2]){
                    break;
                }
            }
            if(i+2<n){
                cout<<-1<<endl;
            }
            else cout<<arr[0]<<" "<<arr[1]<<endl;

            
        
    }
    return 0;
}