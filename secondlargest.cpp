#include<iostream>
#include<limits>
#include<vector>
using namespace std;
//solution 1
int second(int arr[],int n){
    int largest=INT32_MIN;
    for(int i=0;i<n;i++){
       if(arr[i]>largest)
        {largest =arr[i];
        }
        
    }
    int slargest =INT32_MIN;
    for(int i=0;i<n;i++){
       if(arr[i]>slargest && arr[i] !=largest)
        {slargest =arr[i];
        }

    }
    return slargest;
    
}
//solution 2  // there is an error
// void second2(int arr[],int n){
//       int small=INT32_MAX,SSMALL =INT32_MAX;
//       int largest=INT32_MIN,SLARGEST =INT32_MIN;
//       for(int i =0; i<n; i++){
//         if(arr[i]>largest){
//             SLARGEST =largest;
//             largest=arr[i];
//         }
//       else if(arr[i]<small){
//             SSMALL =small;
//             small=arr[i];
//         }
//       }
//       cout<<"second largest is "<< SLARGEST<<endl<<"second smallest is "<< SSMALL;
// }
//solution 3 // optimal solution using vector
int secondlargest( vector<int> &a, int n){
       int largest =a[0];
       int slargest =-1;
       for(int i=0; i<n; i++){
        if(a[i]>largest){
            slargest = largest;
            largest =a[i];
        }
        else if(a[i]<largest && a[i]>slargest)
        slargest = a[i];
       }
       return slargest;
}

int secondsmallest(vector<int> &a, int n){
      int smallest = a[0];
      int ssmallest =INT32_MAX;
      for (int i = 0; i < n; i++)
      {
        if(a[i]<smallest){
            ssmallest =smallest;
            smallest = a[i];
        }
        else if(a[i]>smallest && a[i]<ssmallest){
            ssmallest =a[i];
        }
      }
      return ssmallest;
}
vector<int> getsecondorderelements(vector<int> &a, int n){
    int slargest = secondlargest(a,n);
    int ssmallest = secondsmallest(a,n);
    return {slargest, ssmallest};
}
int main(){
   int arr[]={12,25,56,45,32,12, 45,69};
    vector<int> arr2={12,25,56,45,32,12,45,69,89,11,10,90};
   int n = sizeof(arr)/sizeof(arr[0]);
   int m = arr2.size();
  //  cout<<"The second largest element in the array is: "<<second(arr,n)<<endl;
  //  second2(arr, n);
  vector<int> ans=  getsecondorderelements(arr2, m);
  for(int x : ans){
    cout<<x<<" ";
  }
    return 0;
}