#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<string> v = {"xyz", "xya", "aab", "acc"};
   sort(v.begin(), v.end());
   
   for(auto s : v){
      cout << s << endl;
   }
}
