class Solution {
public:
    int solve(vector<vector<int>>&dp, int i,int j, string &s1, string &s2){
        if(i==s1.size() && j==s2.size()) return 0;
        if(i==s1.size()) return int(s2[j])+solve(dp,i,j+1,s1,s2);
        if(j==s2.size()) return int(s1[i])+solve(dp,i+1,j,s1,s2);
        if(dp[i][j]!=-1) return dp[i][j];
        if(s1[i]==s2[j]) return dp[i][j]=solve(dp,i+1,j+1,s1,s2);
        return dp[i][j]=min(int (s1[i])+solve(dp,i+1,j,s1,s2),int (s2[j])+solve(dp,i,j+1,s1,s2));

    }
    int minimumDeleteSum(string s1, string s2) {
        vector<vector<int>>dp(s1.size()+1,vector<int>(s2.size()+1,-1));
        return solve(dp,0,0,s1,s2);
    }
};