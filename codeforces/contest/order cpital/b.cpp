#include<bits/stdc++.h>
using namespace std;
int buublesort(vector<int>& arr, vector<int>& brr) {
    int n = arr.size();
    int count = 0;
    for (int j = 0; j < n; j++) {
        int lowerbound=j;
         for (int i = j; i < n; i++) {
            if (arr[i] <= brr[j]) {
                lowerbound = i;
                break;
            }
        }
        for(int i=lowerbound;i>j;i--){
            swap(arr[i],arr[i-1]);
            count++;

        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int maxi=0,m=0;
        vector<int>arr(n);
        vector<int>brr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxi=max(maxi,arr[i]);
        }
        for(int i=0;i<n;i++){
            cin>>brr[i];
            m=max(m,brr[i]);
        }
        vector<int>a=arr;bool p=true;
        sort(a.begin(),a.end());
        for(int i=0;i<n;i++){
            if(a[i]>brr[i]){
              p=false;
              break;
            }
        }
        if(!p){
            cout<<-1<<endl;
            continue;
        }

        int c=buublesort(arr,brr);
         cout<<c<<endl;
    }
    return 0;
}