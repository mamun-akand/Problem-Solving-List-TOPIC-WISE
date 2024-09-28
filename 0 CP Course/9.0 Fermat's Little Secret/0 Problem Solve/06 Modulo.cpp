// https://toph.co/p/modulo
// URL: https://vjudge.net/problem/Toph-modulo

#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll    long long int
#define   ld    long double	
#define   vll   vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
//#define   endl    '\n'
#define   debug(x)   cout << #x << " : " << x << endl;
#define   SpicyWings return 0;
 
#define   ln      cout<<'\n';
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl
 
#define   Test    ll tc; cin>>tc; for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ":";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;
//=====================================================================

int main(){
	FAST;
   
	Test{
		ll n; cin>>n;
		vll v(n);
		priority_queue<pair<ll, ll>> pq;
		for(ll i=0; i<n; i++){
			cin>>v[i];
			pq.push({v[i], i});
		}
		ll q; cin>>q;
		while(q--){
			ll M; cin>>M;
			while(!pq.empty()){
				auto [x, i] = pq.top();
				if(x < M) break;
				pq.pop();
				pq.push({x%M, i});
			}
		}
		while(!pq.empty()){
			auto [x, i] = pq.top();
			v[i] = x;
			pq.pop();
		}
		
		cs; cout << "\n";
		for(ll i=0; i<n; i++){
			cout << v[i] << (i==n-1 ? '\n' : ' ');
		}
	}
   
	SpicyWings;
}





















