#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,a;
    cin>>n>>m>>a;
   long long row=(n+a-1)/a;
   long long col = (m+a-1)/a;
    long long total =row*col;
    cout<<total;
    return 0;
}