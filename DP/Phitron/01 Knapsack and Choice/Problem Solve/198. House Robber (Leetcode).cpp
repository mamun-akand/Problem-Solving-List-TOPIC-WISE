// https://leetcode.com/problems/house-robber/description/?source=submission-noac

#define ll long long
ll dp[100+50], n, ara[100+50];;
class Solution {
public:
    ll solve(ll i, vector<int> &nums, vector<ll> &dp){
        if(i >= nums.size()) return 0;

        if(dp[i] != -1) return dp[i];

        ll choice1 = nums[i] + solve(i+2, nums, dp);
        ll choice2 = solve(i+1, nums, dp);
        return dp[i]=max(choice1, choice2);
    }
    int rob(vector<int>& nums) {
        vector<ll> dp(nums.size()+1, -1);
        return solve(0, nums, dp);
    }
};