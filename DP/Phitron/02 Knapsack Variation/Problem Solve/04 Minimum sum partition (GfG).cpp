class Solution{
  #define ll long long
  ll total=0;
  
  public:
    int subset_dif_min(ll last_pos, ll sum, int ara[], vector<vector<ll>> &dp){
        if(last_pos < 0){
            return abs(sum - abs(total-sum));
        }
        
        if(dp[last_pos][sum] != -1){
            return dp[last_pos][sum];
        }
        if(sum+ara[last_pos] != total){
            ll choice1 = subset_dif_min(last_pos-1, sum+ara[last_pos], ara, dp);
            ll choice2 = subset_dif_min(last_pos-1, sum, ara, dp);
            return dp[last_pos][sum] = min(choice1, choice2);
        }else{
            ll choice = subset_dif_min(last_pos-1, sum, ara, dp);
            return dp[last_pos][sum] = choice;
        }
    }
    
	int minDifference(int ara[], int n)  { 
	    for(ll i=0; i<n; i++){
	        total += ara[i];
	    }
	    
	    vector<vector<ll>> dp(n+5, vector<ll>(total+5));
	    
        for(ll i=0; i<n+5; i++){
          for(ll j=0; j<total+5; j++){
             dp[i][j] = -1;
          }
        }
        
	   // cout << total << endl;
	    return subset_dif_min(n-1, 0, ara, dp);
	} 
};