#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll dp[1005][1005];

ll rod_cutting(ll n, ll s, ll w[], ll val[]){
   if(n == 0 or s == 0) return 0;
   
   if(dp[n][s] != -1){
      return dp[n][s];
   }
   
   if(s >= w[n]){
      ll choice1 = val[n] + rod_cutting(n, s-w[n], w, val);
      ll choice2 = rod_cutting(n-1, s, w, val);
      return dp[n][s] = max(choice1, choice2);
   }else{
      ll choice = rod_cutting(n-1, s, w, val);
      return dp[n][s] = choice;
   }
}

int main(){
   ll rod; cin>>rod;
   ll val[rod+1], weight[rod+1];
   
   for(ll i=1; i<=rod; i++){
      cin>>val[i];
   }
   //cutting size (weight) would be: 1 2 3 4 5 .... n
   for(ll i=1; i<=rod; i++){
      weight[i] = i;
   }
   memset(dp, -1, sizeof(dp));

   cout << rod_cutting(rod, rod, weight, val) << endl;
}

/*

input:
4 6
5 3 2 4
4 1 3 2
Output:
18

*/