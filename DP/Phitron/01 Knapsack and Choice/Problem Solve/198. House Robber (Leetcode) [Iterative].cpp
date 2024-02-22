// https://leetcode.com/problems/house-robber/description/?source=submission-noac

#define ll long long

class Solution {
public:
    int rob(vector<int>& nums) {
        ll n = nums.size();
        vector<ll> dp(n+3, 0);
        dp[n] = 0;
        dp[n+1] = 0;
        for(ll i=n-1; i>=0; i--){
            ll choice1 = nums[i] + dp[i+2];
            ll choice2 = dp[i+1];
            dp[i] = max(choice1, choice2);
        }
        return dp[0];
    }
};