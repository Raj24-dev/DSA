#include<bits/stdc++.h>
using namespace std;
vector<int> countOppositeParity(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n, 0);
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (i != j && ((nums[i] % 2 == 0 && nums[j] % 2 != 0) || (nums[i] % 2 != 0 && nums[j] % 2 == 0))) {
                    result[i]++;
                }
            }
        }
        return result;
    }
    int reverse(int n){
        int rev=0;
        while(n>0){
            rev=rev*10+n%10;
            n=n/10;
        }
        return rev;
    }
    bool isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
int sumOfPrimesInRange(int n) {
    int sum=0;
      int m =  reverse(n);
      for(int i=min(n,m);i<=max(n,m);i++){
            if(isPrime(i)){
                sum+=i;
            }
      }
      return sum;

    }
    int absolutediff(int n,int m){
        return abs(n-m);
    }
    vector<int>closest(vector<int>&nums){
        vector<int>close;
        for(int i=0;i<nums.size();i++){
            int mini=INT_MAX;
            int best=-1;
           for(int j=0;j<nums.size();j++){
            if(j!=i)  {int diff= absolutediff(nums[i],nums[j]);
              if(mini>diff|| diff==mini&&j<best){
                mini =diff;
                best=j;
              }}
           }
          close.push_back(best);
      
        }
        return close;
    }
     vector<int> minCost(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> close = closest(nums);
        vector<int> result;
        for(int i=0;i<queries.size();i++){
            int cost=0;
            for(int j=0;j<queries[i].size();j++){
                cost+=absolutediff(nums[queries[i][j]],nums[close[queries[i][j]]]);
            }
            result.push_back(cost);
        }        return result;
    }
    int maxFixedPoints(vector<int>& nums) {
        int n=nums.size();
        int j=0;int i=0;
        int cost=0;

        while(i<=n){
            if(nums[i]!=i){
                j++;
            }
            else{
            cost++;
            i++;
            }
        }
        return cost;
    }
    
int main(){
   vector<int> nums = {-5,-2,3};
   vector<vector<int>> queries = {{0,2},{2,0},{1,2}};
  vector<int> result = minCost(nums, queries);  
  for(int i=0;i<result.size();i++){
    cout<<result[i];
  }
}