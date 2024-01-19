// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/X

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
ll n, m;
ll ara[12][12], Max = LLONG_MIN;

void max_sum(ll i, ll j, ll sum){
   if(i==n and j==m){
      Max = max(Max, sum);
      return;
   }
   if(j<m) max_sum(i, j+1, sum+ara[i][j+1]);
   if(i<n) max_sum(i+1, j, sum+ara[i+1][j]);
}

int main(){
   FAST;
   
   cin>>n>>m;
   for(ll i=1; i<=n; i++){
      for(ll j=1; j<=m; j++){
         cin>>ara[i][j];
      }
   }
   
   max_sum(1,1,ara[1][1]);
   cout << Max << endl;
    
   SpicyWings;
}