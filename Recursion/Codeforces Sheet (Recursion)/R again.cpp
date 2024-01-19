// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R

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
const ll N = 1e5+9;
ll ara[N];

bool is_palindrome(ll l, ll r){
   if(l >= r){
      return true;
   }
   if(ara[l] != ara[r]){
      return false;
   }
   return is_palindrome(l+1, r-1);
}

int main(){
   FAST;
   
   ll n; cin>>n;
   for(ll i=1; i<=n; i++){
      cin>>ara[i];
   }
   
   if(is_palindrome(1, n)) py;
   else pn;
    
   SpicyWings;
}