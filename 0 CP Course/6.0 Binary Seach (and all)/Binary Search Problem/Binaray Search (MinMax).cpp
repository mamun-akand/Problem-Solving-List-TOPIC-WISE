// URL: https://cses.fi/problemset/task/1085
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
const ll N=2e5+100;
ll n, k, sum=0;
vll v(N);

bool monotonic(ll x){
   for(ll i=1; i<=n; i++){
      if(v[i] > x) return false;
   }
   
   ll sum=0, cnt=0;
   for(ll i=1; i<=n; i++){
      if(sum+v[i] <= x){
         sum += v[i];
      }
      else{
         cnt++;
         sum = v[i];
      }  
      if(i==n) {cnt++;}
   }
   return cnt<=k;
}

int main(){
   FAST;
   cin>>n>>k;
   for(ll i=1; i<=n; i++){
      cin>>v[i];
      sum += v[i];
   }
   
   ll l=0, r=sum, ans;
   while(l<=r){
      ll mid = l + (r-l)/2;
      if(monotonic(mid)){
         r = mid-1;
         ans = mid;
      }
      else{
         l = mid+1;
      }
   }
   cout << ans << endl;
   
   SpicyWings;
}