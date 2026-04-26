class Solution {
public:
    bool containsCycle(vector<vector<char>>& g) {
        int m=g.size(),n=g[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        int d[4][2]={{0,1},{1,0},{0,-1},{-1,0}};

        for(int i=0;i<m;i++) for(int j=0;j<n;j++){
            if(vis[i][j]) continue;

            queue<vector<int>> q;
            q.push({i,j,-1,-1});
            vis[i][j]=1;

            while(!q.empty()){
                auto v=q.front(); q.pop();
                int x=v[0],y=v[1],px=v[2],py=v[3];

                for(auto &k:d){
                    int nx=x+k[0],ny=y+k[1];

                    if(nx<0||ny<0||nx>=m||ny>=n||g[nx][ny]!=g[x][y]) continue;

                    if(nx==px && ny==py) continue;

                    if(vis[nx][ny]) return true;

                    vis[nx][ny]=1;
                    q.push({nx,ny,x,y});
                }
            }
        }
        return false;
    }
};