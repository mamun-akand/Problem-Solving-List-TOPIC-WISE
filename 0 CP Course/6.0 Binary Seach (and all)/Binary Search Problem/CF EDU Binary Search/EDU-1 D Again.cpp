// URL: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   SpicyWings  return 0;
#define   endl    "\n"

#define   ln      cout<<"\n";
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=====================================================================
const ll N = 1e5+9;
vll v(N);
ll n;

int main(){
   FAST;
   
   cin>>n;
   for(ll i=1; i<=n; i++){
      cin>>v[i];
   }
   sort(v.begin()+1, v.begin()+n+1);
      
   ll k; cin>>k;
   while(k--){
      ll l, r; cin>>l>>r;
      
      auto Upper = upper_bound(v.begin()+1, v.begin()+n+1, r);
      auto Lower = lower_bound(v.begin()+1, v.begin()+n+1, l);
      
      cout << (Upper-Lower) << ' ';
   }
   
   SpicyWings;
}