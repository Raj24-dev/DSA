#include<bits/stdc++.h>
using namespace std;
 int candy(vector<int>& ratings) {
        int n =ratings.size();
        vector<int> candies(n, 1);
        
        for(int i=1;i<n;i++){
              if(ratings[i-1]<ratings[i]){
                candies[i]=candies[i-1]+1;
              }
        }
        for(int i=n-2;i>=0;i--){
              if(ratings[i]>ratings[i+1]){
                candies[i]=max(candies[i],candies[i+1]+1);
              }
        }
        return accumulate(candies.begin(),candies.end(),0);
    }
     vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
         vector<vector<int>>res;
         int i=0;
         int n=intervals.size();
         while(i<n&&intervals[i][0]<newInterval[0]){
            res.push_back(intervals[i]);
            i++;
         }
         while(i<n&&intervals[i][0]<newInterval[1]){
            newInterval[0]=min(newInterval[0],intervals[i][0]);
            newInterval[1]=max(newInterval[1],intervals[i][1]);
            i++;
         }
         while(i<n){
            res.push_back(intervals[i]);
            i++;
         }
         return res;

    }
int main(){
  vector<int> ratings={2,1,1}; 
    cout<<candy(ratings); 
    return 0;
}