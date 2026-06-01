#include<bits/stdc++.h>
using namespace std;
bool ispalindrome(int arr[], int left,int right){
    for(int i=left; i<=(right-left)/2; i++){
        if(arr[i]!=arr[right-left-i]){
            return false;
        }
    }
    return true;
}
int mex(int arr[],int left,int right, int n){
    for(int i=left; i<=right; i++){
        bool found = false;
        for(int j=0; j<n; j++){
            if(arr[j] == i){
                found = true;
                break;
            }
        }
        if(!found){
            return i;
        }
    }
    return n+1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
       int arr[2*n];
        for(int i=0; i<2*n; i++){
            cin>>arr[i];
        }
        int maxi=0;
        for(int i=0; i<2*n; i++){
            int m;
            for(int j=i; j<2*n; j++){
                if(ispalindrome(arr, i, j)){
                    m = mex(arr, i,j,n);
                    maxi=max(maxi,m);
                }
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}