#include<bits/stdc++.h>
using namespace std;
using ll = long long;

//is p subseq of s?
bool is_subsequence(string s, string p){
   ll i=0, n=s.size();
   for(auto ch:p){
      while(i<n && s[i]!=ch){
         i++;
      }
      if(i>=n) return false;
      i++;
   }
   return true;
}

int main(){
   string s, p;
   s = "aabaaba";
   p = "abb";
   
   cout << boolalpha << is_subsequence(s, p);
}