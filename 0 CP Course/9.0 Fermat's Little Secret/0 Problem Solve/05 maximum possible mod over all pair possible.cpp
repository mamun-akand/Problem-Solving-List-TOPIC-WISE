// https://www.geeksforgeeks.org/find-the-maximum-possible-value-of-ai-aj-over-all-pairs-of-i-and-j/
// Find the maximum possible value of a[i] % a[j] over all pairs of i and j
#include<bits/stdc++.h>
using namespace std;
#define   ll    long long int

int main(){
	ll n; cin>>n;
	vector<int> v(n); for(auto &it:v) cin>>it;
	
	ll first, second;
	first = second = INT_MIN;
	
	for(ll i=0; i<n; i++){
		if(v[i] > first){
			second = first;
			first = v[i];
		}
		else if(v[i] > second && v[i] < first){
			second = v[i];
		}
	}
	
	if(n < 2 or second == INT_MIN) cout << 0 << endl;
	else cout << second << endl;
		
}





















