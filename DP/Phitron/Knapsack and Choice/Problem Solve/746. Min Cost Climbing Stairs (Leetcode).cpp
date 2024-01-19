// https://leetcode.com/problems/min-cost-climbing-stairs/
#define ll long long
ll dp[1009]={-1};

class Solution {
public:
    ll solve(ll n, vector<int>& ara){
        if(n<=0) return ara[0];
        if(n==1) return ara[1];
        //dp
        if(dp[n] != -1){
            return dp[n];
        }
        ll choice1 = ara[n] + solve(n-1, ara);
        ll choice2 = ara[n] + solve(n-2, ara);
        return dp[n] = min(choice1, choice2);

    }

    int minCostClimbingStairs(vector<int>& ara) {
        ara.push_back(0);
        ll n = ara.size();
        memset(dp, -1, sizeof(dp));
        return solve(n-1, ara);
    }
};