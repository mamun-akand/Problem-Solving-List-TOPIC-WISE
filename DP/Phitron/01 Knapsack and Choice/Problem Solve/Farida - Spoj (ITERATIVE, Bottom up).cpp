// https://www.spoj.com/problems/FARIDA/en/

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
const ll N = 1e4+9;
ll ara[N], dp[N], n;

int main(){
   FAST;
   
   Test{
      memset(dp, 0, sizeof(dp));
      cin>>n;
      for(ll i=1; i<=n; i++){
         cin>>ara[i];
      }
      
      dp[0] = 0;
      dp[1] = ara[1];
      for(ll i=2; i<=n; i++){
         dp[i] = max(ara[i]+dp[i-2], dp[i-1]);
      }
      cs;
      cout << dp[n] << endl;
   }
   
   SpicyWings;
}