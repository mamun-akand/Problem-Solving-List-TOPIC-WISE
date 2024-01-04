#include<bits/stdc++.h>
using namespace std;
#define   ll   long long int

bool cmp(string a, string b){
   return a+b < b+a;
   //In C++, comparator should return false 
   // if its arguments are equal.
   //here in place '<', we never can use '<='. 
   // if using, then runtime error. Comparator follows 
}

int main(){
   ll n; cin>>n;
   vector<string> v(n); for(auto &it:v) cin>>it;
   
   sort(v.begin(), v.end(), cmp);
   
   for(auto s:v){
      cout << s;
   }
   cout << endl;
}