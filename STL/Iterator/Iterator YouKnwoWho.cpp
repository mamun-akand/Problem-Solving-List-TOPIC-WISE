#include<bits/stdc++.h>
using namespace std;

#define   vp(v)   for(auto it:v){cout << it <<" ";} cout << endl;

int main(){
   vector <int> vv = {1,2,3,4,5};
   
   auto it1 = vv.rbegin();
   cout << *it1 << endl;
   
   it1++;
   cout << *it1 << endl;
   
   auto itt = vv.rend();
   cout << "Element Diff:" << (itt - it) << endl;
   
   
   //usage of next(), prev()
   vector<int> v = {1, 2, 3, 4, 5};
   auto it = v.begin();
   
   cout << (*it) << '\n'; // Output: 1
   it = next(it);
   cout << (*it) << '\n'; // Output: 2
   it = next(it, 2);
   cout << (*it) << '\n'; // Output: 4
   it = prev(it);
   cout << (*it) << '\n'; // Output: 3
   it = prev(it, 2);
   cout << (*it) << '\n'; // Output: 1

}