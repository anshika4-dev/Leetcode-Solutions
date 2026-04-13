class Solution {
public:
    int dfs(vector<vector<int>> &grid, int i, int j, int &count){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0) return 0;
        count++;
        grid[i][j]=0;
        dfs(grid,i+1,j,count);
        dfs(grid,i-1,j,count);
        dfs(grid,i,j+1,count);
        dfs(grid,i,j-1,count);
        return count;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int count=0,area=0,m=grid.size(),n=grid[0].size();
        for(int i=0;i<m;i++) for(int j=0;j<n;j++) if(grid[i][j]==1){ 
            area=max(area,dfs(grid,i,j,count));
            count=0;
        }
        return area;
    }
};