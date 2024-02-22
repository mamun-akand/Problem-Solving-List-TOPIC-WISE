// www.codingninjas.com/studio/problems/number-of-subsets_3952532?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTabValue=PROBLEM

#define ll long long
const ll MOD = 1e9+7;
ll dp[105][10005];

ll solve(ll i, vector<int> &ara, int sum){
	if(i<0){
		if(sum==0) return 1;
		else return 0;
	}
	
	if(dp[i][sum] != -1) return dp[i][sum];
	
	if(sum >= ara[i]){
		ll choice1 = solve(i-1, ara, sum-ara[i]);
		ll choice2 = solve(i-1, ara, sum);
		return dp[i][sum] = ((choice1%MOD) + (choice2%MOD))%MOD;
	}else{
		ll choice = solve(i-1, ara, sum);
		return dp[i][sum] = (choice%MOD);
	}
}

int findWays(vector<int>& arr, int k)
{
	memset(dp, -1, sizeof(dp));
    return solve(arr.size()-1, arr, k);
}
