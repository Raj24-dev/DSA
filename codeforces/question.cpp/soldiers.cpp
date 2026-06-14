#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int total=((w*(w+1))/2)*k;
    int loan=total-n;
    loan>=0?cout<<loan: cout<<0;
    return 0;
}