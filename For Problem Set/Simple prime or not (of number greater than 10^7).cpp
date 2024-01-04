// https://vjudge.net/contest/579458#problem/A

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
#define   py      cout<<"Yes"<<endl
#define   pn      cout<<"No"<<endl
 
#define   Test    ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
#define   cs      cout << "Case " << t << ": ";
#define   vp(v)   for(auto it:v){cout << it <<' ';}ln;
//=====================================================================
 
int main(){
   FAST;
   
   ll n; cin>>n;
   vll v;
   
   for(ll i=1; i*i<=n; i++){
      if(n%i==0){
         v.pb(i);
         if(i != n/i) v.pb(n/i);
      }
   }
   if(v.size() == 2) py;
   else pn;
   
   vp(v);
    
   SpicyWings;
}