#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll mod_mul_inverse(ll a, ll mod){
	for(ll i=1; i<mod; i++){
		if(a*i%mod==1) return i;
	}
	return -1; //inverse doesn't exist
}

int main(){
	cout << mod_mul_inverse(2,5) << endl;
	// cout << mod_mul_inverse(3,6) << endl;
}





















