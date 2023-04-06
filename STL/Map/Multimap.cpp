#include<bits/stdc++.h>
using namespace std;

int main(){
   map<int, int> m;
   
   m.insert({1,4});
   m.insert({2,3});
   m.insert({3,6});
   
   for(auto it:m){
      cout << it.first << " " << it.second << endl;
   }
   cout << endl;
   


   multimap<int, int> mm;
   
   mm.insert({3,4});
   mm.insert({2,3});
   mm.insert({3,6});
   mm.insert({3,5});
   
   mm.erase(next(mm.begin(), 2));
   
   for(auto it:mm){
      cout << it.first << " " << it.second << endl;
   }
   
}