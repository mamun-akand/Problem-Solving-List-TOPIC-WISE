//https://leetcode.com/problems/shortest-common-supersequence/
class Solution {
public:
    #define ll long long
    string shortestCommonSupersequence(string s1, string s2) {
        ll m = s1.size(), n = s2.size();
        ll dp[m+1][n+1];

        for(ll i=0; i<=m; i++){
            for(ll j=0; j<=n; j++){
                if(i==0 || j==0) dp[i][j] = 0;
            }
        }
        for(ll i=1; i<=m; i++){
            for(ll j=1; j<=n; j++){
                if(s1[i-1] == s2[j-1]) dp[i][j] = 1+dp[i-1][j-1];
                else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }

        ll i=m, j=n;
        string ans = "";
        while(i != 0 && j!=0){
            if(s1[i-1] == s2[j-1]){
                ans += s1[i-1];
                i--; j--;
            }
            else if(dp[i-1][j] < dp[i][j-1]){
                ans += s2[j-1];
                j--;
            }else{
                ans += s1[i-1];
                i--;
            }
        }
        while(i != 0){
            ans += s1[i-1];
            i--;
        }
        while(j != 0){
            ans += s2[j-1];
            j--;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};