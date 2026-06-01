#include<iostream>
#include<vector>

using namespace std;
int largest(vector<int> &nums){
    
       int largest =nums[0];
       for(int i=1; i<nums.size(); i++){
        if(nums[i]>largest){
            largest=nums[i];
        }
       }
       return largest;
    
}
int main(){
    int n;
    cout<<"Enter number of elements in the array: ";
    cin>>n;
    vector<int> nums(n); // Pre-allocate the vector with size 'n'
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>nums[i]; // Directly assign to the vector index
    }
    cout << "The largest element in the array is: " << largest(nums) << endl;
    return 0;
}