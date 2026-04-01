class Solution {
public:
    int dfs(vector<vector<int>>&grid, int count,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0) return 0;
        grid[i][j]=0;
        return 1+dfs(grid,count,i-1,j)+dfs(grid,count,i+1,j)+dfs(grid,count,i,j+1)+dfs(grid,count,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxCount=0, m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) maxCount=max(maxCount,dfs(grid,0,i,j));
            }
        }
        return maxCount;
    }
};