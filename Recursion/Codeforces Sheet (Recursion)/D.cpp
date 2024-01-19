// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

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

void rec(ll n){
   if(n==0) return;
   ll last_digit = n%10;
   ll remaining = n/10;
   rec(remaining);
   cout << last_digit << ' ';
}

int main(){
   FAST;
   
   Test{
      ll n; cin>>n;
      if(n==0) cout << 0;
      else rec(n);
      cout << endl;
   }
   
   SpicyWings;
}