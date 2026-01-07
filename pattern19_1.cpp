#include<iostream>
using namespace std;

void pattern12(int n){
    int iniS= 0;
   for(int i = 0; i<=n; i++){
        //star
       for(int j = 1; j<=n-i; j++){
          cout << "*";
       }
       //space
       for(int j = 0;j<iniS; j++){
        cout << " ";
       }
       for(int j = 1;j<=n-i; j++){
        cout << "*";
       }
      iniS +=2;
        cout<< endl;
    } 
    iniS = 2*n-2; // iniS = 8;
     for(int i = 1; i<=n; i++){
        //star
       for(int j = 1; j<=i; j++){
          cout << "*";
       }
       //space
       for(int j = 0;j<iniS; j++){
        cout << " ";
       }
       for(int j = 1;j<=i; j++){
        cout << "*";
       }
      iniS -=2;
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