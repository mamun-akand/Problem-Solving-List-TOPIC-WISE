#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

void subsequence(ll i, vll &v, vll &temp, ll n){
   if(i>=n){
      for(auto it:temp){
         cout << it << " ";
      }
      if(temp.size()==0){
         cout<< "{}";
      }  
      cout << endl;
      return;
   }
   
   //take
   temp.push_back(v[i]);
   subsequence(i+1, v, temp, n);
   
   temp.pop_back();
   
   //not take
   subsequence(i+1, v, temp, n);
}

int main(){
   vll v{3,1,4};
   vll temp;
   subsequence(0, v, temp, v.size());
}

// TC : O(2^n) * O(n) --> O(n) for printing