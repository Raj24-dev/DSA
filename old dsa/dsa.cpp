#include<iostream>
#include<vector>
using namespace std;
void game(int n, vector<int>&arr){

    int count=0;
    for(int i=0; i<n;i++){
        int x=arr[i];
       while (x > 1) {
         if (x % 5 == 0) {
                x /= 5;
            } else if (x % 4 == 0) {
                x /= 4;
            } else if (x % 3 == 0) {
                x /= 3;
            } else if (x % 2 == 0) {
                x /= 2;
            } else {
                break;
            }
            count++;

    }
    
}
    if(count%2==1){
       cout<<"YES"<<endl;
    }
    else{
        cout<<"NO";
    }
}
int main (){
  int t;
  cin >> t;
  for(int i = 1; i<=t; i++ )
  {  int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[i]=a;
    }
        game(n,arr);
    }
   

    return 0;
}