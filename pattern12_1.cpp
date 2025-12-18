#include<iostream>
using namespace std;

void pattern12(int n){
    for(int i = 1; i<=n; i++){
        //number
        for(int j = 1; j<=i; j++){
            cout << j;
        }
        //space
        for(int j =1; j<=2*(n-i); j++){
            cout << " ";
        }
        //number
        for(int j =i; j>=1; j--){
            cout << j;
        }
     
        cout << endl;
      
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