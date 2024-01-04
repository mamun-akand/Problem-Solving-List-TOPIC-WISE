#include<bits/stdc++.h>
using namespace std;
 
int main(){
   vector<int> v = {1,2,1,3,4,2,4};
   sort(v.begin(), v.end());
   auto it = unique(v.begin(), v.end());
   v.erase(it, v.end());
   for(auto x:v){
      cout << x << ' ';
   }
}