#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll hash_cal(string s){
	ll base = 31, Mod=1e9+7;
	ll power=1; //31^0 = 1
	ll hash=0;
	for(ll i=0; i<s.size(); i++){
		hash = (hash + (s[i]-'a' + 1)*power)%Mod;
		power = (power*base)%Mod;
	}
	return hash;
}

int main(){
   // cout << hash_cal("abc") << endl;
   vector<string> v{"aa", "aa", "ab", "ab", "abc"};
   set<ll> st;
   for(auto s:v){
   	ll hash = hash_cal(s);
   	st.insert(hash);
   }
   cout << st.size() << endl;
}





















