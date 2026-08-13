class Solution {
public:
    int solve(vector<vector<int>>&dp, int i,int j,string &s1, string &s2){
        if(i==s1.size() || j==s2.size()) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]) return dp[i][j]=1+solve(dp,i+1,j+1,s1,s2);
        return  dp[i][j]=max(solve(dp,i+1,j,s1,s2),solve(dp,i,j+1,s1,s2));
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.size()+1,vector<int>(text2.size()+1,-1));
        return solve(dp,0,0,text1,text2);
    }
};