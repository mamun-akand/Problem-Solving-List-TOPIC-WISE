#include<bits/stdc++.h>
using namespace std;
using ll = long long;

//TC : O(N+M)
int main(){
   string s1,s2;
   cin>>s1>>s2;
   
   ll i=0;
   for(ll j=0; j<s2.size(); j++){
      if(s1[i] == s2[j]) i++;
   }
   
   if(i == s1.size()) cout<<"A is subSequence of B";
   else cout<<"NOT Subsequence";
}
