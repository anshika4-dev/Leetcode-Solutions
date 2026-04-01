class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color) return image;
        vector<vector<bool>>visited(image.size(),vector<bool>(image[0].size(),false));
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int ans=image[sr][sc];
        while(!q.empty()){
            int x= q.front().first,y=q.front().second;
            q.pop();
            if(x<0 || x>=image.size() || y<0 || y>=image[0].size() || image[x][y]!=ans || visited[x][y]) continue;
                q.push({x-1,y});
                q.push({x+1,y});
                q.push({x,y-1});
                q.push({x,y+1});
            visited[x][y]=true;
            image[x][y]=color;
        }
        return image;
    }
};