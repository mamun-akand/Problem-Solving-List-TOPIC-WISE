//https://leetcode.com/problems/partition-equal-subset-sum/description/

#define ll long long
int dp[205][10005];
class Solution {
public:
    bool solve(ll i, ll sum, vector<int>& ara){
        if(i<0){
            if(sum == 0) return true;
            else return false;
        }

        if(dp[i][sum] != -1) return dp[i][sum];

        if(sum >= ara[i]){
            bool choice1 = solve(i-1, sum-ara[i], ara);
            bool choice2 = solve(i-1, sum, ara);
            return dp[i][sum] = choice1 || choice2;
        }else{
            bool choice = solve(i-1, sum, ara);
            return dp[i][sum] = choice;
        }
    }
    bool canPartition(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        ll n = nums.size();
        ll total=0;
        for(ll i=0; i<n; i++){
            total += nums[i];
        }
        if(total%2==1) return false;
        else return solve(n-1, total/2, nums);
    }
};