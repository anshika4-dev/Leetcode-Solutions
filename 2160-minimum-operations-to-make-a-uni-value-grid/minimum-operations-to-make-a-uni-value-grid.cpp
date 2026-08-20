class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>res;
        for(int i=0;i<grid.size();i++) for(int j=0;j<grid[0].size();j++) res.push_back(grid[i][j]);
        sort(res.begin(),res.end());
        int count=0,median=res[res.size()/2];
        for(int i=0;i<res.size();i++){
            int diff=abs(res[i]-median);
            if(diff%x!=0) return -1;
            count+=(diff/x);
        }
        return count;
    }
};