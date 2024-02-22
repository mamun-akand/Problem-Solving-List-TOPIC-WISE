#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll dp[1005][1005];

ll unbounded_knapsack(ll n, ll s, ll w[], ll val[]){
   if(n == 0 or s == 0) return 0;
   
   if(dp[n][s] != -1){
      return dp[n][s];
   }
   
   if(s >= w[n]){
      ll choice1 = val[n] + unbounded_knapsack(n, s-w[n], w, val);
      ll choice2 = unbounded_knapsack(n-1, s, w, val);
      return dp[n][s] = max(choice1, choice2);
   }else{
      ll choice = unbounded_knapsack(n-1, s, w, val);
      return dp[n][s] = choice;
   }
}

int main(){
   ll n, bag_capacity; cin>>n>>bag_capacity;
   ll weight[n+1], val[n+1];
   
   for(ll i=1; i<=n; i++){
      cin>>val[i];
   }
   for(ll i=1; i<=n; i++){
      cin>>weight[i];
   }
   memset(dp, -1, sizeof(dp));
   
   cout << unbounded_knapsack(n, bag_capacity, weight, val) << endl;
}

/*

input:
4 6
5 3 2 4
4 1 3 2
Output:
18

*/