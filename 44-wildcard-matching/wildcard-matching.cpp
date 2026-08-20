class Solution {
public:
    //1==true, 0==false, -1==not_solved
    bool solve(vector<vector<int>> &dp, string &s, string &p, int i,int j){
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==s.size() && j==p.size()) return dp[i][j]=1;
        if(j==p.size()) return dp[i][j]=0;
        if(i==s.size()){
            if(p[j]=='*') return dp[i][j]=solve(dp,s,p,i,j+1);
            else return dp[i][j]=0;
        }
        if(s[i]==p[j] || p[j]=='?') return dp[i][j]=solve(dp,s,p,i+1,j+1);
        if(p[j]=='*') return dp[i][j]=(solve(dp,s,p,i+1,j) || solve(dp,s,p,i,j+1));
        return dp[i][j]=0;
    }
    bool isMatch(string s, string p) {
        vector<vector<int>>dp(s.size()+1,vector<int>(p.size()+1,-1));
        return solve(dp,s,p,0,0);
    }
};