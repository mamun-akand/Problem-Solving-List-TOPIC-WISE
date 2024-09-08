// URL: https://codeforces.com/gym/101021/problem/1
#include<bits/stdc++.h>
using namespace std;
#define   ll    long long int
string query(ll n){
	cout << n << '\n'; cout.flush();
	string s; cin>>s;
	return s;
}
int main(){
	ll L=1, R=1e6; ll ans = -1;
	while(L <= R){
		ll mid = L + (R-L)/2;
		if(query(mid) == ">="){
			ans = mid;
			L = mid + 1;
		}else{
			R = mid - 1;
		}
	}
	cout << "! " << ans << '\n'; 
	cout.flush();
}





















