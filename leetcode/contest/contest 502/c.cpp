#include<bits/stdc++.h>
using namespace std;
int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n =items.size();
        int mini=INT_MAX;
        for(auto it:items){
            mini=min(mini,it[1]);
        }
        int ans=budget/mini;
        for(int j=1;j<(1<<n);j++){
            int cost=0;int fc=0;int bought=0;
            for(int i=0;i<n;i++){
                if(!(j>>i&1))continue;
                cost+=items[i][1];
                bought++;
                 for (int k = 0; k < n; k++) {
                if (k != i && items[k][0] % items[i][0] == 0)
                    fc++;
            }
            }
             if (cost > budget) continue;
        
      int extra = (budget - cost) / mini;
        ans = max(ans, bought + fc + extra);
        }
        return ans;

    }
    vector<int> maximumMEX(vector<int>& nums) {
        vector<int> result;
    int i = 0, n = nums.size();
    
    while (i < n) {
        unordered_set<int> seen;
        int mex = 0;
        int j = i;
        
        while (j < n) {
            seen.insert(nums[j]);
            
            while (seen.count(mex)) mex++;
            j++;
            if (j < n && nums[j] != mex) break;
        }
        
        result.push_back(mex);
        i = j;
    }
    
    return result;
    }
    vector<int> lexicographicallyLargestArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> sm(n);
        vector<bool> seen(n + 2, false);
        int cm = 0;
        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] < n + 2) {
                seen[nums[i]] = true;
            }
          
            while (seen[cm]) {
                cm++;
            }
            sm[i] = cm;
        }
        
        vector<int> result;
        int i = 0;
        while (i < n) {
            int target_mex = sm[i];
            if (target_mex == 0) {
                result.push_back(0);
                i++;
                continue;
            }
            
            int count_needed = 0;
            vector<bool> prefix_seen(target_mex + 1, false);
            
            // Expand prefix until we have seen all numbers from 0 to target_mex - 1
            while (i < n && count_needed < target_mex) {
                int val = nums[i];
                
                // If the value is useful (less than target) and hasn't been collected yet
                if (val < target_mex && !prefix_seen[val]) {
                    prefix_seen[val] = true;
                    count_needed++;
                }
                i++; // Keep moving forward
            }
            
            // We found the shortest prefix! Append the target to result.
            result.push_back(target_mex);
        }
        
        return result;
    }
    vector<int> lexicographicallyLargestArray(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> sm(n);
        
        vector<bool> seen(n + 2, false);
        int cm = 0;
        
        
        for (int i = n - 1; i >= 0; --i) {
            if (nums[i] < n + 2) {
                seen[nums[i]] = true;
            }
            while (seen[cm]) {
                cm++;
            }
            sm[i] = cm;
        }
        
        vector<int> result;
        int i = 0;
        while (i < n) {
            int t = sm[i];
            if (t == 0) {
                result.push_back(0);
                i++;
                continue;
            }
            
            int count_needed = 0;
            vector<bool> prefix_seen(t+ 1, false);
            
            while (i < n && count_needed < t) {
                int val = nums[i];
                
                if (val < t && !prefix_seen[val]) {
                    prefix_seen[val] = true;
                    count_needed++;
                }
                i++;
            }
            
            result.push_back(t);
        }
        
        return result;
    }
int main(){
    
    return 0;
}