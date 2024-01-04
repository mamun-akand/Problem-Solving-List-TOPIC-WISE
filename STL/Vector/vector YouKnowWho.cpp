#include<bits/stdc++.h>
using namespace std;

#define   vp(v)   for(auto it:v){cout << it <<" ";} cout << endl;

int main(){
   vector <int> v = {1,2,3,4};
   
   v.resize(6, 9);    vp(v);
   v.resize(8);       vp(v); 
   v.assign(3, 10);   vp(v);   
   
   vector <int> x = {5,6,7,8,5};
   
   x.insert(x.begin()+1, 100);      //O(n)
   vp(x);
   
   cout << count(x.begin(), x.end(), 5)      << endl;    //O(n)
   cout << accumulate(x.begin(), x.end(), 0) << endl;    //O(n)
   
}