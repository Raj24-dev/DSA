#include<bits/stdc++.h>
using namespace std;
 
    vector<int> asteroidCollision(vector<int>& asteroids) {
   stack<int>st;
   int n=asteroids.size();
   for(int i=0;i<n;i++){
    if(st.empty() || asteroids[i]>0){
        st.push(asteroids[i]);
    }
    else{
        while(!st.empty()&& st.top()>0&&st.top()<abs(asteroids[i])){
            st.pop();
        }
        if(st.empty()||st.top()<0){
            st.push(asteroids[i]);
        }
        else if(st.top()==abs(asteroids[i])){
            st.pop();
        }
        else{
            continue;
        }
    }
}
    vector<int>result(st.size());
            for(int i=st.size()-1;i>=0;i--){
                result[i]=st.top();
                st.pop();
            }
    return result;

}
int main(){
    vector<int> asteroids={10,2,-5};
    vector<int> result=asteroidCollision(asteroids);    
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}