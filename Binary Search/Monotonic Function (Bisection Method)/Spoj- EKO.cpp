// Bisection Method
// URL: https://www.spoj.com/problems/EKO/

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
ll N, M;
vll v; 

bool totalWood(ll h){
   ll sum=0;
   for(ll i=0; i<N; i++){
      if(v[i] > h) sum += v[i]-h;
   }
   return sum >= M;
}

int main(){
   FAST;
   
   cin>>N>>M;
   for(ll i=0; i<N; i++){
      ll x; cin>>x;
      v.pb(x);  
   }
   ll mx = *max_element(all(v));
   
   ll L=0, H = mx, ans=0;
   while(L <= H){
      ll Mid = (L+H)/2;
      if(totalWood(Mid) == 1){
         ans = Mid;
         L = Mid+1;
      }
      else{
         H = Mid-1;
      }
   }
   cout << ans << endl;
   
   SpicyWings;
}