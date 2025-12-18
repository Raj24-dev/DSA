#include<iostream>
#include<unistd.h>
using namespace std;
void pattern7(int n){
    for (int k = 3; k >= 1; k--) {
    cout << "Starting in " << k << "...\n";
    sleep(1);
}
// i and j start with 0
for(int i = 0; i<n; i++){
        //space
        for( int j = 0; j<i; j=j+1){
            cout << " ";
            sleep(1);
        }
        sleep(1);
        //star
        for( int j = 0; j<2*(n-i)-1; j=j+1){
            cout << "*";
            sleep(1);
        }
        sleep(1);
        //space
        for( int j =0; j<i; j=j+1){
            cout << " ";
            sleep(1);
        }
        
        cout<< endl;
        sleep(1);
    } 
}
int main (){
  int t;
  cin >> t;
  for(int i = 1; i<=t; i++ )
  {  int n;
    cin >> n;
    pattern7(n);
}
    return 0;
}