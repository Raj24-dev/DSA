#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long f(int n,int ind,int brightness,vector<vector<int>>&intervals,int brighted,int bulbon,vector<vector<int>>&dp){
    if(ind==n){
        if(brighted>=brightness)return bulbon;
        else return 1e9;
    }
    if(dp[ind][brighted]!=-1)return dp[ind][brighted];
    int off=f(n,ind+1,brightness,intervals,brighted,bulbon,dp);
        int newb=brighted;
     if(ind-1>=0)newb++;
      newb++;
     if(ind+1<n)newb++;
     int on=f(n,ind+1,brightness,intervals,newb,bulbon+1,dp);
     return dp[ind][brighted]= min(off,on);
}
    long long t(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        long long total = 0;
        int start = intervals[0][0], end = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= end) {
                end = max(end, intervals[i][1]);
            } else {
                total += end - start + 1;
                start = intervals[i][0];
                end   = intervals[i][1];
            }
        }
        total += end - start + 1;
        return total;
    }
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        vector<vector<int>>dp(n,vector<int>(brightness + 1, -1));
           int p= f(n,0,brightness,intervals,0,0,dp);
        if(p==1e9)return -1;
        wee
    }
};
int main(){
    
    return 0;
}