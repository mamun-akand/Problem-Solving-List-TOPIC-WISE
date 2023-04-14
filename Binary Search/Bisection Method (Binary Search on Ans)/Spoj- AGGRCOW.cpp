//URL: https://www.spoj.com/problems/AGGRCOW/

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
ll n, c;
vll v;

bool possible(ll Min){
   ll cnt = 1, last=v[0];
   for(ll i=1; i<n; i++){
      if(v[i]-last >= Min){
         cnt++;
         last = v[i];
      }
      if(cnt==c) return 1;
   }
   return 0;
}

int main(){
   FAST;
    
   Test{
      cin>>n>>c;
      for(ll i=0; i<n; i++){
         ll x; cin>>x;
         v.pb(x);
      }
      sort(all(v));
      
      ll L=1, R= v[n-1]-v[0], ans=LLONG_MIN;

      while(L<=R){
         ll Mid = (L+R)/2;
         if(possible(Mid)){
            ans = max(ans, Mid);
            L = Mid+1;
         }
         else{
            R = Mid-1;
         }
      }
      cout << ans << endl;
      v.clear();
   }
   
   SpicyWings;
}