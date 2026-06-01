#include<bits/stdc++.h>
using namespace std;
     bool isAdjacentDiffAtMostTwo(string s) {
    int n=s.size();
    for(int i=1;i<n;i++){
        int a =s[i-1]-'0';
        int b=s[i]-'0';
        if(abs(a-b)>2)return false;
    }
    return true;
    }
    long long ipow(int base, int exp) {
    long long result = 1;
    for (int i = 0; i < exp; i++) result *= base;
    return result;
}
    int countKthRoots(int l, int r, int k) {
        int low = (int)ceil(pow(l, 1.0/k));
        int high = (int)floor(pow(r, 1.0/k));
        while (low>1&&(long long)pow(low-1, k) >= l) low--;
        while ((long long)pow(low,   k) <  l) low++;
        while ((long long)pow(high+1, k) <= r) high++;
        while ((long long)pow(high,   k) >  r) high--;
        return max(0, high - low + 1);
    }
    int smallestUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<string,int>mpp;
        for(int i=0;i<n;i++){
            string s="";
            for(int j=i;j<n;j++){
             s+=(to_string(nums[j])+",");
             mpp[s]++;
            }
        }
        int minlen=INT_MAX;
       int minlen = INT_MAX;
    for(auto& [key, cnt] : mpp){
        if(cnt == 1){
            int len = count(key.begin(), key.end(), ',');
            minlen = min(minlen, len);
        }
    }

       return minlen;
    }
    int countLocalMaximums(vector<vector<int>>& matrix) {
         int n = matrix.size();
         int m = matrix[0].size();
         int maxi= INT_MIN;
         int count = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            maxi = max(maxi, matrix[i][j]);
        }
    }
     for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (matrix[i][j] == maxi) count++;
        }
    }
}
int main(){
   int l=0,r=26,k=2;
   cout<<countKthRoots(l,r,k);
    return 0;
}