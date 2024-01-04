// URL: https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/B

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
const ll N = 1e4+9;
vll v(N);
ll n, k;

bool monotonic(double max_len){
   ll ans=0;
   for(ll i=1; i<=n; i++){
      ans += (ll)((ld)v[i]/max_len);
   }
   return ans >= k;
}

int main(){
   FAST;
    
   cin>>n>>k;
   for(ll i=1; i<=n; i++){
      cin>>v[i];
   }   
   ld l=0, r=1e7, MaxLen;
   while(r-l >= 1e-7){
      ld mid = l+(r-l)/2.0;
      if(monotonic(mid)){
         MaxLen = mid;
         l = mid;
      }
      else{
         r = mid;
      }
   }
   cout << fixed << setprecision(7) << MaxLen << endl;
   
   SpicyWings;
}