// Scenario 2: String Sort You are given nn strings and you will have to sort them based on their lexicographical order. How will you do it?

#include<bits/stdc++.h>
using namespace std;

int main(){
   vector<string> v;
   int n; cin>>n;
   
   for(int i=0; i<n; i++){
      string s; cin>>s;
      v.push_back(s);
   }
   
   sort(v.begin(), v.end());
   
   for(auto it:v){
      cout << it << endl;
   }
}