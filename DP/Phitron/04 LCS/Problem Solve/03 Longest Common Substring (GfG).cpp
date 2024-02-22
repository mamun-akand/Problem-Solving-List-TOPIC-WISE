//https://www.geeksforgeeks.org/problems/longest-common-substring1452/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
    public:
    
    #define ll long long
    int longestCommonSubstr (string s1, string s2, int n, int m)
    {
        ll dp[n+1][m+1];
        
        for(ll i=0; i<=n; i++){
            for(ll j=0; j<=m; j++){
                if(i==0 || j==0) dp[i][j] = 0;
            }
        }
        
        for(ll i=1; i<=n; i++){
            for(ll j=1; j<=m; j++){
                if(s1[i-1] == s2[j-1]) dp[i][j] = 1 + dp[i-1][j-1];
                else dp[i][j] = 0;
            }
        }
        
        ll Max = 0;
        for(ll i=0; i<=n; i++){
            for(ll j=0; j<=m; j++){
                if(dp[i][j] > Max) Max = dp[i][j];
            }
        }
        return Max;
    }
};