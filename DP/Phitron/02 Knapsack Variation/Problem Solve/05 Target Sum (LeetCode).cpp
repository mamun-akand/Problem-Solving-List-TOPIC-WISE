class Solution {
    #define ll long long
public:
    ll subset_exp_cnt(ll n, ll sum, vector<int>& ara, int target){
        if(n<0){
            if(sum == target) return 1;
            else return 0;
        }

        ll choice1 = subset_exp_cnt(n-1, sum+ara[n], ara, target);
        ll choice2 = subset_exp_cnt(n-1, sum-ara[n], ara, target);
        return choice1 + choice2;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        ll n = nums.size();
        return subset_exp_cnt(n-1, 0, nums, target);
    }
};