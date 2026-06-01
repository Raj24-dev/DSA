#include<bits/stdc++.h>
using namespace std;
  vector<int> countWordOccurrences(vector<string>& chunks, vector<string>& queries) {
    string com;
    for(string s: chunks){
      com+=s;
    }
    vector<string> words;
    string w="";
   
    for(int i=0;i<com.size();i++){
      char ch= com[i];
      if(islower(ch)){
        w+=ch;
      }
      else if(ch=='-'&&!w.empty()&& i+1<com.size()&& islower(com[i+1])){
        w+=ch;
      }
      else{
        if(!w.empty()){
          words.push_back(w);
          w="";
        }
      }
    }
     if(!w.empty()) {
      words.push_back(w);
    }
    vector<int>ans;
    for(string q: queries){
      int count=0;
      for(string w:words){
        if(w==q){
          count++;
        }
      }
      ans.push_back(count);
    }
    return ans;
  }
  long long minarr(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    long long sum = 0;
    
    for (int a : nums) {
        int mini = a;
        
        for (int i = 1; (long long)i * i <= a; i++) {
            if (a % i == 0) {
                if (binary_search(nums.begin(), nums.end(), i)) {
                    mini = min(mini, i);
                }
                int div = a / i;
                if (binary_search(nums.begin(), nums.end(), div)) {
                    mini = min(mini,div);
                }
            }
        }
        
        sum += mini;
    }
    
    return sum;
}
   int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int l=0,r=n-1;
        int t=k;
        long long sum=0,maxSum=0;
        while(k--){
                  sum+=cardPoints[l];
                  l++;
                 maxSum=max(maxSum,sum);
        }
        while(l>0){
          l--;
                sum-=cardPoints[l];
                  sum+=cardPoints[r];
r--;
                 maxSum=max(maxSum,sum);
               
        }
        return (int)maxSum;
    }
    string minWindow(string s, string t) {
      int minlen=INT_MAX;int n=s.size();
      int sIndex=0;
    int m=t.size();
    for(int i=0;i<n;i++){
      int hash[256]={0};int count=0;
          for(int j=0;j<m;j++){
              hash[t[j]]++;
          }
          for(int j=0;j<n;j++){
            if(hash[s[j]>0])count++;
            hash[s[j]]--;
            if(count==m){
              if(j-i+1<minlen){
                minlen=j-i+1;
                sIndex=i;
                break;
              }
            }
          }
        }
       return  s.substr(sIndex,minlen);
    }
int main(){
  vector<int>arr={1,2,3,4,5,6,1};
  int k=3;
  cout<<maxScore(arr,k);
    
    return 0;
}