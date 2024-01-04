// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/B

#include<bits/stdc++.h>
using namespace std;

//====================================================================
//TYPES
#define   ll    long long int
#define   ld    long double	
#define   vll   vector <ll>	
//FUNCTIONS
#define   FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define   all(v)  v.begin(),v.end()
#define   setp(n) fixed << setprecision(n)
#define   endl    '\n'
#define   debug(x)   cout << #x << " : " << x << endl;
#define   SpicyWings return 0;
 
#define   ln      cout<<'\n';
#define   pb      push_back
#define   py      cout<<"YES"<<endl
#define   pn      cout<<"NO"<<endl
 
#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;
//=====================================================================
 
int main(){
   FAST;
   
   ll n, s; cin>>n>>s;
   vll v(n+1); for(ll i=1; i<=n; i++) cin>>v[i];
   
   ll R = 1, sum = 0, ans = n+1;
   for(ll L=1; L<=n; L++){
      while(R < n and sum + v[R] < s){
         sum += v[R];
         R++;
      }
      if(sum + v[R] >= s) ans = min(ans, R-L+1);
      sum -= v[L];
   }
   if(ans == n+1) cout << -1 << endl;
   else cout << ans << endl;
    
   SpicyWings;
}