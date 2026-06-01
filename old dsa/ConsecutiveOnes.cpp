#include<bits/stdc++.h>
using namespace std;
int consecutiveO(vector<int> &arr){
    int n= arr.size();
    int j=0;
    int hash[n+1]={0};
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1){
            hash[j]++;

        }
        else{
            j++;
        }
    }
    int max=0;
    for(int i=0; i<j; i++){
        if(hash[i]>max){
            max=hash[i];
        }
    }
    return max;
    
}
int consecutiveO2(vector<int> &arr){
    int n= arr.size();
    int count=0,maxcount=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==1){
           
          count++; 
        //   if(count>max){
        //     max=count;   
        // }
        maxcount=max(count,maxcount);
        }
        else{
           count=0;
        }
       
        
    }
    
    return maxcount;
    
}
int main(){
    vector<int> nums;
     nums= {1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1};
    int m= consecutiveO2(nums);
    cout<<m;
     
    return 0;
}