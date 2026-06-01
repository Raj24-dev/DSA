
#include<bits/stdc++.h>
#include<thread>
#include<chrono>
#include<unistd.h>
using namespace std;
void pattern7(int n){
// i and j start  with 1
for (int k = 3; k >= 1; k--) {
    cout << "Starting in " << k << "...\n";
    sleep(1);
} cout << "\033[2J\033[1;1H";
for(int i = 1; i<=n; i++){
    
        //space
        for( int j = 1; j<i; j=j+1){
           cout << " ";  usleep(30000);
        }
    
        //star
        for( int j = 1; j<=2*(n-i)+1; j=j+1){
          cout << "\033[1;32m*\033[0m"; usleep(30000);
        }
     
        //space
        for( int j =1; j<i; j=j+1){
            cout << " "; usleep(30000);
        }
       
        cout<< endl;
        usleep(30000);
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