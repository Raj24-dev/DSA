#include<bits/stdc++.h>
using namespace std;
int findnumberappearingones(vector<int> &nums){
    int n= nums.size();
    int xor1=0;
    for(int i =0; i<n;i++){
       xor1=xor1^nums[i];
    }
    return xor1;
}
int main(){
     vector<int> nums;
     nums= {1,2,2,1,3,4,4};
    int m= findnumberappearingones(nums);
    cout<<m;
    return 0;
}