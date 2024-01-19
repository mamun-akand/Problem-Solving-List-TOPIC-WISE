// https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

#define ll long long
ll dp[105][10005];

class Solution{   
public:
    bool solve(ll i, vector<int> &ara, int sum){
        if(i<0){
            if(sum==0) return true;
            else return false;
        }
        
        if(dp[i][sum] != -1) return dp[i][sum];
        
        if(sum >= ara[i]){
            bool choice1 = solve(i-1, ara, sum-ara[i]);
            bool choice2 = solve(i-1, ara, sum);
            return dp[i][sum] = choice1 || choice2;
        }else{
            bool choice = solve(i-1, ara, sum);
            return dp[i][sum] = choice;
        }
    }
    
    bool isSubsetSum(vector<int>arr, int sum){
        memset(dp, -1, sizeof(dp));
        return solve(arr.size()-1, arr, sum);
    }
};