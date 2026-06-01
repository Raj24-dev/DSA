#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums) {
        int sum=0;
        int n =nums.size();
        int sum2=(n*(n+1))/2;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        return sum2-sum;
    }
int main(){
    vector<int> nums;
     nums= {0,1,2,3,4,5,6,8};
    int m= missingNumber(nums);
    cout<<m;
    return 0;
}