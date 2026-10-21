class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,1e9);
        dp[0]=0;
        for(int i=1;i<=amount;i++) for(int x:coins) if(i>=x) dp[i]=min(dp[i],dp[i-x]+1);
        return dp[amount]!=1e9?dp[amount]:-1;
    }
};