//https://www.codingninjas.com/studio/problems/print-longest-common-subsequence_8416383?leftPanelTabValue=PROBLEM

#define ll long long
string findLCS(int n, int m,string &s1, string &s2){
	ll dp[n+1][m+1];
	for(ll i=0; i<=n; i++){
		for(ll j=0; j<=m; j++){
			if(i==0 or j==0) dp[i][j] = 0;
		}
	}

	for(ll i=1; i<=n; i++){
		for(ll j=1; j<=m; j++){
			if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
			else{
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}
		}
	}

	string ans = "";
	ll i=n, j=m;

	while(i!=0 && j!=0){
		if(s1[i-1] == s2[j-1]){
			ans += s1[i-1];
			i--;
			j--;
		}else{
			if(dp[i][j-1] > dp[i-1][j]){
				j--;
			} else {
				i--;
			}
		}
	}
    reverse(ans.begin(), ans.end());
	
	return ans;
}