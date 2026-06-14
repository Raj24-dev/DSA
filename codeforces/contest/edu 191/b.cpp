#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if (n == 2) {
    cout << "1 2 1 2 2 1 1 2\n";
} else {
    for (int i = 1; i <= n; i++) 
    cout << i << " " << i << " ";
    for (int i = 1; i <= n - 2; i++){
     cout << i << " ";
    }
    cout << n << " " << n - 1 << " ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}
    }
    return 0;
}