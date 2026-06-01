class Solution {
public:
    int nCr(int n,int r){
        int result =0;
        for(int i=0; i<r;i++){
            result=result*(n-i);
            result=result/(i+1);
        }
        return result;
    }
    vector<int> generateRows(int n){
        vector<int> ans;
      for(int i=0;i<n;i++){
        ans.push_back(nCr(n-1,i));
      }
      return ans;
    }
    vector<vector<int>> generate(int numRows) {
       
        for(int i=0; i<numRows;i++){
          
        }
        return numRows;
    }
};