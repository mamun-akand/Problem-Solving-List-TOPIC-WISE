#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

void subsequence(vll &v, vll &temp, ll i, ll n){
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
   subsequence(v, temp, i+1, n);
   temp.pop_back();
   
   //not take
   subsequence(v, temp, i+1, n);
}

int main(){
   vll v{3,1,4};
   vll temp;
   subsequence(v, temp, 0, v.size());
}

// TC : O(2^n) * O(n) --> O(n) for printing