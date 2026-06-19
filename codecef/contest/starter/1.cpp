#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        long long w= 0;
    if (n>m) {
        w= (n - m + 1) / 2; 
    }
    
    long long t= n - 3 * w;
    long long l = m - (w + t);
    
    cout << l << endl;
    }

    return 0;
}