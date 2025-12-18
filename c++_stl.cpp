#include<iostream>
#include<vector>
using namespace std;
int main(){
//     vector<int> v(5,20);
//     vector<int> v1(v);
//  for(int i = 0; i<5; i++){
//     cout << v1[i]<<" ";
//  }
    std::vector<int> v = {10, 20, 30,40,50};

    // std::cout << "Accessing v[0]: " << v[0] << "\n";       // ✅ Works fine
    // std::cout << "Accessing v.at(0): " << v.at(0) << "\n"; // ✅ Works fine

//     std::vector<int> empty;

//     std::cout << "\nTrying v[0] on empty vector...\n";
//     std::cout << "v[0]: " << empty[0] << "\n"; // ⚠️ Undefined behavior (may crash or print garbage)

// //   std::cout << "\nTrying v.at(0) on empty vector...\n";
//     try {
//         std::cout << "v.at(0): " << empty.at(0) << "\n"; // ❌ Throws std::out_of_range
//     } catch (const std::out_of_range& e) {
//         std::cout << "Caught exception: " << e.what() << "\n";
//     }
v.erase(v.begin()+1, v.begin()+2);
// for(int i =0; i<4; i++){
// cout<< v[i]<<" ";
// }
for(auto it : v){
    cout<< it <<" ";
}
   return 0;
}