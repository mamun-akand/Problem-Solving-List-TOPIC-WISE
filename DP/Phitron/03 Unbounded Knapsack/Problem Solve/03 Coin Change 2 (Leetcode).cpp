// https://leetcode.com/problems/coin-change/description/

#define ll long long
ll dp[12+1][10000+1];

class Solution {
  public:
    ll coin_change(int N, int sum, vector<int>& coins){
        if(N==0 || sum==0){
            if(sum == 0) return 0;
            else return LLONG_MAX-1;
        }
        
        if(dp[N][sum] != -1) return dp[N][sum];
        
        if(sum >= coins[N-1]){
            ll choice1 = 1 + coin_change(N, sum-coins[N-1], coins);
            ll choice2 = coin_change(N-1, sum, coins);
            return dp[N][sum] = min(choice1, choice2);
        }else{
            ll choice = coin_change(N-1, sum, coins);
            return dp[N][sum] = choice;
        }
    }
    
    int coinChange(vector<int>& coins, int amount) {
        ll n = coins.size();
        memset(dp, -1, sizeof(dp));

        ll ans = coin_change(n, amount, coins);
        if(ans == LLONG_MAX-1) return -1;
        else return ans;
    }
};