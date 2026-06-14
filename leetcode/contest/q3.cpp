#include<bits/stdc++.h>
using namespace std;
long long f(int ind,int n,int m,int l,int r,vector<int>&nums,vector<vector<long long>>&dp,int sum){
    if(ind==n)

}
    long long maximumSum(vector<int>& nums, int m, int l, int r) {
        vector<vector<long long>>dp(nums.size(),vector<long long>(m+1,-1));
        int ans=f(0,nums.size(),m,l,r,nums,dp);
        if(ans==0)return -1;
    }
int main(){
    vector<int>nums={4,1,-5,2};
    int m=2,l=1,r=3;
    cout<<maximumSum(nums,m,l,r)<<endl;
    return 0;
}