

#include<iostream>
using namespace std;

void pattern12(int n){
    
 for(int i= 1 ; i <= 2*n-1; i++){
     if(i<=n){
        for(int j= 1; j<=i; j++){
            cout << "*";
        }
     }
     else{
        for(int j=1; j<=2*n-2; j++){
            cout << "*";
        }
     }
     if(i<=(2*n-1)/2){
        for(int j= 1; j<=2*(n-i); j++){
            cout << " ";
        }
     }
     else{
        for(int j=1; j<=2*(n-i); j++){
            cout << " ";
        }
     }
    }
}
int main (){
  int t;
  cin >> t;
  for(int i = 1; i<=t; i++ )
  {  int n;
    cin >> n;
    pattern12(n);
}
    return 0;
}