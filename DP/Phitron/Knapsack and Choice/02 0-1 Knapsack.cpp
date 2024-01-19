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
const ll N = 1e3;
ll w[N], v[N];

ll solve(ll n, ll total){
   if(n==0 || total==0) return 0;
   
   if(total-w[n] >= 0){
      ll choice1 = v[n] + solve(n-1, total-w[n]);
      ll choice2 = solve(n-1, total);
      return max(choice1, choice2);
   }
   else{
      ll choice = solve(n-1, total);
      return choice;
   }
}

int main(){
   FAST;
   
   ll n, total; cin>>n>>total;
   for(ll i=1; i<=n; i++) cin>>w[i];
   for(ll i=1; i<=n; i++) cin>>v[i];
   cout << solve(n, total) << endl;
    
   SpicyWings;
}

// tc: O(2^n)

/*
input:
4 7
5 2 4 3
1 5 3 2
Output:
8
*/