#include<iostream>
#include<string>
using namespace std;

int main(){
   string s; 
    cin >> s;

    //precomputation

    //if only small alphabets are there in the string
    // int hashh[26]={0}; //assuming ASCII characters
    // for (int i = 0; i < s.size(); i++)        
    // {
    //    hashh[s[i]-'a']++;
    // }
    //  int q;
    // cin>>q;
    // while(q--){
    //    char c;
    //    cin>>c;
    //    //fetching the index of character c
    //   cout<< hashh[c-'a']<<endl;
    // }

    //if all the characters are there in the list
    int hashh[256]={0}; //assuming ASCII characters
    for (int i = 0; i < s.size(); i++)        
    {
       hashh[s[i]]++;
    }
    
//query processing
    int q;
    cin>>q;
    while(q--){
       char c;
       cin>>c;
       //fetching the index of character c
      cout<< hashh[c]<<endl;
    }
    return 0;
}