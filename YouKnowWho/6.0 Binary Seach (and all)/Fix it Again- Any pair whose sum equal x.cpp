// URL: https://cses.fi/problemset/task/1640

#include<bits/stdc++.h>
using namespace std;

//=================================================================
//TYPES
#define   ll   long long int
#define   ld 	long double	
#define   vll	vector <ll>	

//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   endl    "\n"
#define   ln      cout<<"\n";
#define   pb      push_back
#define   eb      emplace_back
#define   rn      return 0;

#define   pa      cout<<ans<<endl
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); f1(t,tc)
#define   cs      cout << "Case " << t << ": ";

#define   f0(i,e)   for(ll i=0; i<e; i++)
#define   f1(i,e)   for(ll i=1; i<=e; i++)
#define   SpicyWings  return 0;

#define   vp(v)   for(auto it:v){cout << it <<" ";}
#define   sp(s)   while(!s.empty()){cout<<s.front() <<" ";s.pop();}
//=================================================================

int main(){
   FAST;
    
   ll n, s; cin>>n>>s;
   vector<ll> v;
   
   for(ll i=0; i<n; i++){
      ll x; cin>>x;
      v.pb(x);
   }
   
   multimap<ll, ll> mp;
   bool flag = 0;
   
   for(ll i=0; i<n; i++){
      auto it = mp.find(s-v[i]);
      if(it != mp.end()){
         flag = 1;
         cout << (*it).second << " " << i+1 << endl; 
         break;
      }
      else{
         mp.insert({v[i], i+1});
      }
   }
   
   if(flag==0) cout << "IMPOSSIBLE" << endl;
   
   
   SpicyWings;
}