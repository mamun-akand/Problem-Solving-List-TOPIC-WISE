// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/V

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
const ll N = 22;
ll ara[N], n, total;
bool ans = false;


void subSeq(ll i, ll eq_sum){
   if(i>n){
      if(eq_sum == total){
         ans = true;
      }
      return; 
   }
   subSeq(i+1, eq_sum+ara[i]); // +
   subSeq(i+1, eq_sum-ara[i]); // -
}

int main(){
   FAST;
   
   cin>>n>>total;
   for(ll i=1; i<=n; i++){
      cin>>ara[i];
   }
   
   subSeq(2, ara[1]);
   if(ans) py;
   else pn;
    
   SpicyWings;
}