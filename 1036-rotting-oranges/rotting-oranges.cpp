class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
        int m=grid.size(),n=grid[0].size(),fresh=0,count=0;
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1) fresh++;
                if(grid[i][j]==2) q.push({i,j});
            }
        }
        while(!q.empty()){
            int size=q.size();
            bool rotten=false;
            while(size--){
                for(auto k:dir){
                    int x=q.front().first+k[0], y=q.front().second+k[1];
                    if(x>=0 && x<m && y>=0 && y<n && grid[x][y]==1){
                        q.push({x,y});
                        fresh--;
                        grid[x][y]=2;
                        rotten=true;
                    }
                }
                q.pop();
            }
            if(rotten) count++;
        }
        return fresh==0?count:-1;
    }
};