// URL: https://codeforces.com/problemset/problem/1352/C
#include<bits/stdc++.h>
#define   ll   long long int
#define   Test ll tc; cin>>tc; cin.ignore(); for(ll t=1; t<=tc; t++)
using namespace std;

ll n, k; 
bool monotonic(ll x){
   ll not_divisible = x - (x/n);
   return not_divisible >= k;
}

int main(){
   Test{
      cin>>n>>k;
      ll l=0, r=2e9, ans=0;
      
      while(l<=r){
         ll mid = l + (r-l)/2;
         if(monotonic(mid)){
            ans = mid;
            r = mid-1;       
         }
         else{
            l = mid+1;
         }
      }
      cout << ans << endl;
   }
}