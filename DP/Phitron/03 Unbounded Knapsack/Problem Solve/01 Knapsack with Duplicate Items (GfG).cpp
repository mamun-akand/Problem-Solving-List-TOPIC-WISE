// https://www.geeksforgeeks.org/problems/knapsack-with-duplicate-items4201/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

class Solution{
public:
    int dp[1005][1005];
    
    int knap_sack(int N, int W, int val[], int wt[]){
        if(N==0 || W==0) return 0;
        
        if(dp[N][W] != -1) return dp[N][W];
        
        if(W >= wt[N-1]){
            int choice1 = val[N-1] + knap_sack(N, W-wt[N-1], val, wt);
            int choice2 = knap_sack(N-1, W, val, wt);
            return dp[N][W] = max(choice1, choice2);
        }else{
            int choice = knap_sack(N-1, W, val, wt);
            return dp[N][W] = choice;
        }
    }
    
    
    int knapSack(int N, int W, int val[], int wt[])
    {
        memset(dp, -1, sizeof(dp));
        return knap_sack(N, W, val, wt); 
    }
};