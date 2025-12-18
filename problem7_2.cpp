#include<iostream>
#include<unistd.h>
using namespace std;
void pattern7(int n){
// i and j start  with 1
for (int k = 3; k >= 1; k--) {
    cout << "Starting in " << k << "...\n";
    sleep(1);
}
for(int i = 1; i<=n; i++){
    
        //space
        for( int j = 1; j<i; j=j+1){
           cout << " ";  sleep(1);
        }

        //star
        for( int j = 1; j<=2*(n-i)+1; j=j+1){
          cout << j ; sleep(1);
        }
     
        //space
        for( int j =1; j<i; j=j+1){
            cout << " "; sleep(1);
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