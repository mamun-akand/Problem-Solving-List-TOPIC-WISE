// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/N

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
const ll N = 100+9;
ll a[N][N], b[N][N], sum[N][N];
ll r, c;

void rec(ll i, ll j){
   if(i>r) return;
   
   if(j>c){
      rec(i+1, 1);
      return;
   }
   
   cout << a[i][j] + b[i][j];
   if(j<c) cout << ' ';
   else cout << "\n";

   rec(i, j+1);
}

int main(){
   FAST;
   
   cin>>r>>c;
   for(ll R=1; R<=r; R++){
      for(ll C=1; C<=c; C++){
         cin>>a[R][C];
      }
   }
   for(ll R=1; R<=r; R++){
      for(ll C=1; C<=c; C++){
         cin>>b[R][C];
      }
   }
   rec(1, 1);
    
   SpicyWings;
}