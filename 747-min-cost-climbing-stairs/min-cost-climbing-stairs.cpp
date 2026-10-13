class Solution {
public:
    int helper(vector<int>& cost,vector<int>& dp,int final){
        if(final<=1) return 0;
        if(dp[final]!=-1) return dp[final];
        return dp[final]=min(cost[final-2]+helper(cost,dp,final-2),cost[final-1]+helper(cost,dp,final-1));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int final=ssize(cost);
        vector<int>dp(final+1,-1);
        return helper(cost,dp,final);
    }
};