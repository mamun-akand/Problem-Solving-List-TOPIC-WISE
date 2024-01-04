#include<bits/stdc++.h>
using namespace std;


int main(){
   
   // Random Access Interator : Vector, Array, Deque, String
   // Bidirectional Interator : Set, Map, List
   // Forward Interator       : Unordered_set, Unordered_map, Fowrard_list
   // Iterator can't be used  : Stack, Queue
   
   // after vector modification it will not work anymore

   vector<int> v = {2,3,4};
   auto it = v.begin();
   
   cout << *it << endl;
   v.push_back(3);
   
   //after vector modification it will not work anymore
   cout << *it << endl; 
   

}