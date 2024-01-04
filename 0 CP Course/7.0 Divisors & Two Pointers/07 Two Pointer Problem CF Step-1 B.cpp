// https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A

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
   
   ll n, m; cin>>n>>m;
   vll v(n+1); for(ll i=1; i<=n; i++) cin>>v[i];
   vll vv(m+1); for(ll i=1; i<=m; i++) cin>>vv[i];
   
   for(ll i=1; i<=m; i++){
      auto it = lower_bound(v.begin()+1, v.end(), vv[i]) - v.begin()-1;
      cout << it << ' ';
   }

   SpicyWings;
}