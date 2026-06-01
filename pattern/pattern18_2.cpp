#include<iostream>
using namespace std;

void pattern12(int n){
  
    for(int i = 0; i<n; i++){
        for(char ch = 'E' - i; ch<= 'E'; ch++){
            cout << ch << " ";
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