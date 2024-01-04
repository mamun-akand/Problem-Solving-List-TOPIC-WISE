#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
   string s;
   getline(cin, s);
   
   map<string, ll> mp;
   
   stringstream xyz(s);
   string word;
   
   while(xyz >> word){
      mp[word]++;
   }
   
   for(auto [x, y]:mp){
      cout << x << " " << y << endl;
   }
}