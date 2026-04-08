class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]!=0) return -1;
        if(grid.size()==1) return 1;
        vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,-1},{-1,1}};
        queue<pair<int,int>>q;
        q.push({0,0});
        grid[0][0]=1;
        int temp=1;
        while(!q.empty()){
            int n=q.size();
            while(n--){
                for(auto k:dir){
                    int x=q.front().first+k[0],y=q.front().second+k[1];
                    if(x<0 || x>=grid.size() || y<0 || y>=grid[0].size() || grid[x][y]==1) continue;
                    if(x==grid.size()-1 && y==grid.size()-1) return temp+1;
                    q.push({x,y});
                    grid[x][y]=1;
                }
                q.pop();
            }
            temp++;
        }
        return -1;
    }
};