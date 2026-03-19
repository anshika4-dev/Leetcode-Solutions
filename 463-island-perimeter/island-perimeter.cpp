class Solution {
public:
    int perimeter=0;
    void dfs(vector<vector<bool>> &visited, vector<vector<int>> &grid, int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==0){
            perimeter++;
            return;
        }
        if(visited[i][j]) return;
        visited[i][j]=true;
        dfs(visited,grid,i+1,j);
        dfs(visited,grid,i-1,j);
        dfs(visited,grid,i,j+1);
        dfs(visited,grid,i,j-1);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<vector<bool>> visited(grid.size(), vector<bool>(grid[0].size(),false));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    dfs(visited,grid,i,j);
                    return perimeter;
                }
            }
        }
        return perimeter;
    }
};