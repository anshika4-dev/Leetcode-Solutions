class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool>visited(n,false);
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            visited[q.front()]=true;
            int room=q.front();
            q.pop();
            for(int i=0;i<rooms[room].size();i++){
                if(!visited[rooms[room][i]]) q.push(rooms[room][i]);
            }
        }      
        for(auto x:visited) if(!x) return false;
        return true;
    }
};