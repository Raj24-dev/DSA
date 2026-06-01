#include<iostream>
using namespace std;

void pattern12(int n){
   for(int i = 0; i<n; i++){
        //star
       for(int j = 0; j<=n-i-1; j++){
          cout << "*";
       }
       //space
       for(int j = 0;j<2*i; j++){
        cout << " ";
       }
       for(int j = 0;j<=n-i-1; j++){
        cout << "*";
       }
       //star

        cout<< endl;
    } 
    for(int i = 0; i<n; i++){
        //star
       for(int j = 0; j<=i; j++){
          cout << "*";
       }
       //space
       for(int j = 0;j<2*(n-i)-2; j=j+1){
        cout << " ";
       }
       for(int j = 0;j<=i; j++){
        cout << "*";
       }
       //star

        cout<< endl;
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