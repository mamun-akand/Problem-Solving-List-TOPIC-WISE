#include<bits/stdc++.h>
using namespace std;


int main(){
   
   // O(N) because after erasing all elements need to shift left
   // O(N) because after erasing all elements need to shift left
   // O(N) because after erasing all elements need to shift left

   vector <int> v = {1, 2, 3, 4, 5};

   auto it = v.begin();

    v.erase(it);
//   v.erase(it, it+3);

   for(auto pos:v){
      cout << pos << " ";
   }


}

















