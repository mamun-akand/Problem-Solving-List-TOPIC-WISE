// URL: https://codeforces.com/edu/course/2/lesson/6/5/practice/contest/285084/problem/C
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
ll n, k; 
vll v1(N),v2(N);

bool monotonic(ll x){
   ll cnt = 0;
   for(ll i=1; i<=n; i++){
      ll Find = x - v1[i];
      cnt += upper_bound(v2.begin()+1, v2.begin()+n+1, Find)-v2.begin()-1;
   }
   return cnt >= k;
}

int main(){
   FAST;
    
   cin>>n>>k;
   
   for(ll i=1; i<=n; i++){
      cin>>v1[i];
   }
   for(ll i=1; i<=n; i++){
      cin>>v2[i];
   }
   sort(v1.begin()+1, v1.begin()+n+1); 
   sort(v2.begin()+1, v2.begin()+n+1);
   
   ll l=0, r=2e9, ans=0;
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