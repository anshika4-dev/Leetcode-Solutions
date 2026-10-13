class Solution {
public:
    int helper(vector<int>& nums,vector<int>&dp,int i,int j){
        if(i>j) return 0;
        if(dp[j]!=-1) return dp[j];
        return dp[j]=max(nums[j]+helper(nums,dp,i,j-2),helper(nums,dp,i,j-1));
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        vector<int>dp(nums.size(),-1);
        int first=helper(nums,dp,0,nums.size()-2);
        for(int &x:dp) x=-1;
        return max(first,helper(nums,dp,1,nums.size()-1));
    }
};