#include<iostream>
#include<unistd.h>
using namespace std;
int reverseNumber(int n) {
  int rem = 0;
        int rev = 0;
       while(n>0){
        rem = n%10;
        rev = rev*10+rem;
        n=n/10;
       }
       return rev;
    }
int main (){
  int t;
  cin >> t;
  for(int i = 1; i<=t; i++ )
  {  int n;
    cin >> n;
   cout << reverseNumber(n) << endl;
}
    return 0;
}