// URL: https://codeforces.com/contest/1839/problem/B

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
#define   SpicyWings  return 0;
#define   endl    "\n"

#define   ln      cout<<"\n";
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl

#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<" ";}
//=================================================================

int main(){
   FAST;
    
   Test{
      ll n; cin>>n;
      map<ll, vector<ll>> mp;
      
      for(ll i=0; i<n; i++){
         ll x, y; cin>>x>>y;
         mp[x].pb(y);
      }
      
      ll sum=0;
      
      for(auto[x, v] : mp){
         sort(v.rbegin(), v.rend());
         
         for(ll i=0; i < min(x,(ll)v.size()); i++){
            sum += v[i];
         }
      }
      cout << sum << endl;
   }
      
   
   SpicyWings;
}