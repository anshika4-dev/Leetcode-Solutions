class Solution {
public:
    int solve(vector<vector<int>> &dp, vector<vector<int>> &grid, int i, int j, int m, int n){
        if(i>=m || j>=n) return 0;
        if(grid[i][j]==1) return dp[i][j]=0;
        if(dp[i][j]!=-1) return dp[i][j];
        if(i==m-1 && j==n-1) return dp[i][j]=1;
        return dp[i][j]=solve(dp,grid,i+1,j,m,n)+solve(dp,grid,i,j+1,m,n);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(), n=obstacleGrid[0].size();
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(dp,obstacleGrid,0,0,m,n);
    }
};