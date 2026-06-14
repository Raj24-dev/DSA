#include<bits/stdc++.h>
using namespace std;
 bool consecutiveSetBits(int n) {
        bitset<32>bits(n);
        int count=0;
        if(bits.size()==1)return false;
        for(int i=1;i<bits.size();i++){
            if(bits[i-1]==1&&bits[i]==1)count++;
        }
        if(count==1)return true;
        else return false;
    }
    
int main(){
    int n=6;
    cout<<consecutiveSetBits(6);
    return 0;
}