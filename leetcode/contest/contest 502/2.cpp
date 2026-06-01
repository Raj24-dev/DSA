#include<bits/stdc++.h>
using namespace std;
 bool sorted(vector<int>&nums){
    int n=nums.size();
    for(int i=1;i<n;i++){
        if(nums[i-1]>nums[i])return false;
    }
    return true;
 }
 bool rotatedofsort(vector<int>arr){
    int n=arr.size();
    int count=0;
for(int i=1;i<n;i++){
  if(arr[i-1]>arr[i])count++;
}
if(arr[n-1] > arr[0]) count++; 
return count<=1;
 }
  int minOperations(vector<int>& nums) {
        int n=nums.size();
       
        if(sorted(nums))return 0;
        if(rotatedofsort(nums)){
             for(int i=0;i<n;i++){
                if(nums[i]==0){
                    return (n - i) % n;
                }
             }
        }
        reverse(nums.begin(),nums.end());
        if(rotatedofsort(nums)){
                for(int i=0;i<n;i++){
                if(nums[i]==0)return (n - i) % n+1;
             }
        }
        return -1;
    }
int main(){
    vector<int>arr={1,0,2};
    cout<<minOperations(arr);
    
    
    return 0;
}