// https://vjudge.net/contest/579458#problem/I
// https://codeforces.com/problemset/problem/816/B

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
const ll N = 2e5+9;
ll dif[N];

int main(){
   FAST;
   
   ll recipe, min_recipe, q;
   cin >> recipe >> min_recipe >> q;
   while(recipe--){
      ll L, R; cin>>L>>R;
      dif[L]++;
      dif[R+1]--;
   }
   //pre
   for(ll i=1; i<N; i++){
      dif[i] += dif[i-1];
   }
   //if admissible 
   for(ll i=1; i<N; i++){
      if(dif[i] >= min_recipe) dif[i] = 1;
      else dif[i] = 0;
   }
   //again pre
   for(ll i=1; i<N; i++){
      dif[i] += dif[i-1];
   }
   //question;
   while(q--){
      ll L, R; cin>>L>>R;
      cout << dif[R] - dif[L-1] << endl;
   }
   
   SpicyWings;
}