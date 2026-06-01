#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t; 
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vector<int> e;
        vector<int> b;
        vector<int> c;
        vector<int> d;
        for(int i=0; i<n; i++){
            if(a[i]%6==0){
                e.push_back(a[i]);
            }
            else if(a[i]%2==0){
                b.push_back(a[i]);
            }
            else if(a[i]%3==0){
                c.push_back(a[i]);
            }
            else d.push_back(a[i]);
        }
        
        for(int i=0; i<e.size(); i++){
                cout<<e[i]<<" ";
            }
        for(int i=0; i<b.size(); i++){
            cout<<b[i]<<" ";
        }
        for(int i=0; i<d.size(); i++){
            cout<<d[i]<<" ";
        }
        for(int i=0; i<c.size(); i++){
            cout<<c[i]<<" ";
        }   
        cout<<endl;

    }
    return 0;
}