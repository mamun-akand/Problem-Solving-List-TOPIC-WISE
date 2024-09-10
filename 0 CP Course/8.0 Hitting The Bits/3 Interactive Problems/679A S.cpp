// URL: https://codeforces.com/problemset/problem/679/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool query(ll n){
	cout << n << endl;
	string s; cin>>s;
	return s == "yes";
}
bool is_prime(ll n){
	for(ll i=2; i<n; i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	if(query(2*2) or query(3*3) or query(5*5) or query(7*7)){
		cout << "composite" << endl;
		return 0;
	}
	ll prime_divs=0;
	for(ll i=2; i<=50; i++){
		if(is_prime(i)){
			prime_divs += query(i);
		}
	}	
	if(prime_divs <= 1) cout << "prime" << endl;
	else cout << "composite" << endl;
}




















