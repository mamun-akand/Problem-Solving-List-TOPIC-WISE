#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const ll N = 1000+5;
ll fibo[N];

int main(){
	ll n = 7;	
	fibo[0] = 0;
	fibo[1] = 1; 
	for(ll i=2; i<=n; i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	cout << fibo[n] << endl;
}





















