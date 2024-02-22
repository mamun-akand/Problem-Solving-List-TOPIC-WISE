// https://www.geeksforgeeks.org/problems/coin-change2448/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

#define ll long long
class Solution {
  public:
    
    ll dp[1005][1005];
    
    ll knap_sack(int N, int sum, int coins[]){
        if(N==0 || sum==0){
            if(sum == 0) return 1;
            else return 0;
        }
        
        if(dp[N][sum] != -1) return dp[N][sum];
        
        if(sum >= coins[N-1]){
            ll choice1 = knap_sack(N, sum-coins[N-1], coins);
            ll choice2 = knap_sack(N-1, sum, coins);
            return dp[N][sum] = choice1+choice2;
        }else{
            ll choice = knap_sack(N-1, sum, coins);
            return dp[N][sum] = choice;
        }
    }
    
    long long int count(int coins[], int N, int sum) {
        memset(dp, -1, sizeof(dp));
        return knap_sack(N, sum, coins); 
    }
};