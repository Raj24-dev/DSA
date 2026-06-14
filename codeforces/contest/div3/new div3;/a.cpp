#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        set<int>winners;
        for(int i=0;i<n;i++){
            vector<int>d=a;
            int le=-1;
            int pos=i;
            int total=0;
            for(int x: a)total+=x;
            for(int s=0;s<total;){
                   if(d[pos]>0){
                    d[pos]--;
                    le=pos;
                    s++;
                   }
                   pos=(pos+1)%n;
            }
            winners.insert(le+1);

        }
        cout<<winners.size()<<endl;
    }
    return 0;
}