#include<bits/stdc++.h>
using namespace std;
int longestsubarray(vector<int> &arr,int k){
    int n =arr.size(); 
    
    int maxlen =0;
     for (int i = 0; i < n; i++)
     {int sum=0;
        for (int j = i; j < n; j++)
        {
           sum=sum+arr[j];
            if(sum==k){
             maxlen=max(maxlen, j-i+1);
            }
           
           
        }
       
        
     } return maxlen;
     
}
// int longestsubarray(vector<int> &arr,int k){
//     int n =arr.size(); 
    
//     int maxlen =0;
//      for (int i = 0; i < n; i++)
//      {int sum=0;
//         for (int j = i; j < n; j++)
//         {
//            for(int p=i;p<=j;p++){
//             sum=sum+arr[p];
//             if(sum==k){
//              maxlen=max(maxlen, j-i+1);
//             }
           
//            }
//         }
       
        
//      } return maxlen;
     
// }
int main(){
    vector<int> arr;
    arr={1,2,3,4,5,6,7,8};
    int m =longestsubarray(arr,12);
    cout<<m;
    return 0;
}