// #include<iostream>
// using namespace std;

// int main(){
//     //input size of array
//     int n;
//     cin>>n;
//     int arr[n];
//     //input array elements
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
     
//     //pre computing
//     // use only fixed size array when initalising the hash array as giving dyanamic array size(like n+1) may lead to garbage value intialisation of elements
//     int hash[13]={0};

//     for(int i=0;i<n;i++){
//         hash[arr[i]]++;
//     }
//     //queries
//     int q;
//     cin>>q;
//     while(q--){
//         int key;
//         cin>>key;
//         cout<<hash[key]<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int hashh[10000000]; //  for size  1e6 to 1e7 we initialise in global space for something beyond that we use dynamic memory allocation
int main(){
    //input size of array
    cout<<"Enter size of array"<<endl;
    int n;
    cin>>n;
    int arr[n];
    //input array elements
        cout<<"Enter array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     
    //pre computing
    // use only fixed size array when initalising the hash array as giving dyanamic array size(like n+1) may lead to garbage value intialisation of elements
   // int hash[10000]={0};

    for(int i=0;i<n;i++){
        hashh[arr[i]]++;
    }
    //queries
    int q;
    cout<<"how many queries you want to perform"<<endl;
    cin>>q;
    //q-- used to decrement the value of q after each iteration until it becomes 0
    while(q--){
        int key;
        cin>>key;
        cout<<hashh[key]<<endl;
    }
    return 0;
}