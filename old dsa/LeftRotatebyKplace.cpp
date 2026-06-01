#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//lrft rotate by d places
//solution 1
vector<int> rotate(vector<int> &nums, int k ){
    int n=nums.size();
    k=k%n;
    for(int i=1; i<=k; i++){
        int temp =nums[0];
        for(int j=1; j <n; j++){
            nums[j-1] = nums[j];
        }
        nums[n-1] = temp;
    }  
    return nums;
}
//solution 2 brute approach
vector<int> rotate2(vector<int> &arr, int d ){
    int n=arr.size();
    d=d%n;
 
    vector<int>temp(d);
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for(int i =d; i<n;i++){
        arr[i-d] = arr[i];
    }
    for(int i =n-d; i<n; i++){
        arr[i] = temp[i-(n-d)];
    }
   return arr;
}
//by kilo
vector<int> rotatekilo(vector<int> &arr, int d ){
    int n=arr.size();
    
    // Handle edge cases
    if(n == 0 || d == 0) {
        return arr; // No rotation needed
    }
    
    // Normalize rotation count
    d=d%n;
    if(d == 0) {
        return arr; // Full rotation brings array back to original
    }
 
    // Store first 'd' elements in temporary array
    vector<int> temp(d);
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    
    // Shift remaining elements left by 'd' positions
    for(int i = d; i < n; i++){
        arr[i - d] = arr[i];
    }
    
    // Copy back the stored elements to the begin
    for(int i = 0; i < d; i++){
        arr[n - d + i] = temp[i];
    }

}
//aolution 3 optimal solution
void rotate3(vector<int> &arr, int d ){
    int n=arr.size();
    d=d%n;
    reverse(arr.begin(), arr.begin()+d);
    reverse(arr.begin()+d, arr.begin()+n);
    reverse(arr.begin(), arr.begin()+n);
}
int main(){
     vector<int> nums;
     nums= {1,2,3,4,5,6,7};
     rotate3(nums, 4);
     for(int i =0; i<7;i++){
        cout<<nums[i]<<" ";
     }

    return 0;
} 