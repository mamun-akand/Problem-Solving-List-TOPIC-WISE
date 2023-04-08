#include<bits/stdc++.h>
using namespace std;

int main(){
   map<int, int> mp;
   
   mp.insert({1,3});
   mp.insert({3,5});
   mp.insert({7,9});
   mp.insert({9,4});
   mp.insert({15,3});
   
   auto it = mp.equal_range(3); 
   // Returns two iterators,
   // First iter contains search value (key, map value) 
   // Second iter contains next upper bound value of key(key, map value) 
  
   // serch value
   cout << it.first->first  << " " << it.first->second << endl;

   //upper bound of search value
   cout << it.second->first << " " << it.second->second << endl;
   
   //TC: O(log n)
   
}