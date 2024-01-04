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

const ll N=1e5;
ll s, n;
vll v(N);

bool monotonic(ll x){
   ll sum=0;
   for(ll i=0; i<n; i++){
      sum += v[i]/x;
   }
   return sum >= s;
}

int main(){
   FAST;

   cin>>n>>s;
   for(ll i=0; i<n; i++){
      cin>>v[i];
   }
   
   ll l=1, r=1e9, ans = -1;
   
   while(l<=r){
      ll mid = l + (r-l)/2;
      
      if(monotonic(mid)){
         ans = mid;
         l = mid+1;
      }
      else{
         r = mid-1;
      }
   }
   cout << ans << endl;
   
   SpicyWings;
}