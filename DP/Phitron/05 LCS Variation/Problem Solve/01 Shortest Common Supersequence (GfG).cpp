// https://www.geeksforgeeks.org/problems/shortest-common-supersequence0322/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

#define ll long long
ll dp[101][101];

class Solution
{
    public:
    
    ll LCS(string s1, string s2, ll m, ll n){
        if(m==0 || n==0) return 0;
        
        if(dp[m][n] != -1) return dp[m][n];
        
        if(s1[m-1] == s2[n-1]){
            ll choice = 1 + LCS(s1, s2, m-1, n-1);
            return dp[m][n] = choice;
        }else{
            ll choice1 = LCS(s1, s2, m-1, n);
            ll choice2 = LCS(s1, s2, m, n-1);
            return dp[m][n] = max(choice1, choice2);
        }
    }
    
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        memset(dp, -1, sizeof(dp));
        return m+n-LCS(X, Y, m, n);
    }
};