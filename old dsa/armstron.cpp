#include<iostream>
#include<unistd.h>
using namespace std;
   bool isArmstrong(int n) {
     int r=0,sum=0;
     int x=n;
     while(n>0){
        r = n%10;
        sum = sum+ r*r*r;
        n = n/10;
     }
     if(sum == x ){
        return 1;
     }
     else{
        return 0;
     }}
int main (){
  int t;
  cin >> t;
  for(int i = 1; i<=t; i++ )
  {  int n;
    cin >> n;
   cout << isArmstrong(n) << endl;
}
    return 0;
}