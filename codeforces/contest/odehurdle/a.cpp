#include<bits/stdc++.h>
using namespace std;
vector<int>p;
void sieve(){
    int lim = sqrt(1e9);
    vector<bool> isprime(lim+1, true);
    isprime[0] = isprime[1] = false;
    for(long long i = 2; i <= lim; i++){
        if(isprime[i]){
            p.push_back(i);
            for(long long j =i*i; j <= lim; j += i)
                isprime[j] = false;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin >>n;
        bool flag=0;
       
        for(auto i: p){
            int count=0;
           if(n%(i)==0){
           while(n%i==0){
               n=n/i;
              count++;
           }
           if(count>=2){
            flag=true;
            break;
           }
           }
        }
    if(flag)cout<<"Alice\n";
    else cout<<"Bob\n";
    }
    return 0;
}