// URL: https://cses.fi/problemset/task/1620

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
#define   vp(v)   for(auto it:v){cout << it <<" ";}ln;
//=================================================================

const ll N=2*1e5+100;
ll n, t;
vll v(N);
int flag=1;

bool monotonic(ll x){
   ll sum=0;
   for(ll i=0; i<n; i++){
      sum += x/v[i];
      if(sum >= t) break;
   }
   return sum >= t;
}

int main(){
   FAST;

   cin>>n>>t;
   for(ll i=0; i<n; i++){
      cin>>v[i];
   }
   
   ll l=1, r=1e18, ans = 0;
   
   while(l<=r){
      ll mid = l + (r-l)/2;
      
      if(monotonic(mid)){
         ans = mid;
         r = mid-1;
      }
      else{
         l = mid+1;
      }
   }
   cout << ans << endl;
   
   SpicyWings;
}