#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(long long n){
     string s=to_string(n);
    return equal(s.begin(),s.begin() + s.size() / 2, s.rbegin());
 }
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        bool c=0;
        long long r=n%12;
        for(long long i=r;i<=n;i+=12){
            if(isPalindrome(i)){
                long long a=n-i;
                cout<<i<< " "<<a<<endl;
                c=1;
                break;
            }
        }
        if(!c)cout<<-1<<endl;
    }
    
    return 0;
}