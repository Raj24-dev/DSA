#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    //advantage of unordered map over map is that it uses hashing technique internally and thus has average time complexity of O(1) for search, insert and delete operations where as map uses balanced BST internally and thus has time complexity of O(log n) for search, insert and delete operations
    unordered_map<int, int> mpp;
    for(int i = 0; i<n;i++){
        cin>>arr[i];
         mpp[arr[i]]++; // we can also compute while taking values
    }
    //iterate in the map
    for(auto it :mpp){
        cout<< it.first<<"->"<<it.second<<endl;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
     cin>>number;
     cout<<mpp[number]<<endl;
    }
    return 0;
}