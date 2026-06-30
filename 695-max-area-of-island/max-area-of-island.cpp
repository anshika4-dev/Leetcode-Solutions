class Solution {
public:
    int dfs(vector<vector<int>>& grid, int m, int n, int i,int j){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0) return 0;
        grid[i][j]=0;
        return 1+dfs(grid,m,n,i-1,j)+dfs(grid,m,n,i+1,j)+dfs(grid,m,n,i,j+1)+dfs(grid,m,n,i,j-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int count=0,max_area=0,m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++) for(int j=0;j<n;j++) if(grid[i][j]==1) max_area=max(max_area,dfs(grid,m,n,i,j));
        return max_area;
    }
};