#include<iostream>
#include<unistd.h>
#include<math.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
   int divisors(int n){
    for(int i =1; i<=sqrt(n); i++){
        if(n%i==0){ 
            cout<< i<<" ";
            if(i !=n/i){
                cout<< n/i<< " ";
            }
        }
    }
   }
   //solution 2 and sorted divisors
 int divisors1(int n){
    vector<int> ls;
    for(int i =1; i<=sqrt(n); i++){
        if(n%i==0){ 
            ls.push_back (i);
            if(i !=n/i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout<< it<< " ";
   }
int main (){
  int t;
  cin >> t;
  for(int i = 1; i<=t; i++ )
  {  int n;
    cin >> n;
  // cout << divisors(n);
   cout << divisors1(n);
}
    return 0;
}