#include<iostream>
#include<bits/stdc++.h>
using namespace std;

  int countDigit(int n) {
   int count = 0;
    while (n>0){
        n=n/10;
        count++;
    }
    return count;
    }
    //solution 2
     int countDigit1(int n) {
  int count = (int)(log10(n))+1;
  return count;
    }

int main(){
   int n;
   scanf("%d", &n);
   int b,c;
   b= countDigit(n);
   cout<< b<< endl;
   c= countDigit1(n);
   cout<< c;
    return 0;
}