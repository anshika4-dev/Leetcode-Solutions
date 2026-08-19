class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int>temp;
        for(int i=0;i<grid.size();i++) for(int j=0;j<grid[0].size();j++) temp.push_back(grid[i][j]);
        sort(temp.begin(),temp.end());
        int median=temp[temp.size()/2];
        int count=0;
        for(int i=0;i<temp.size();i++){
            int diff=abs(temp[i]-median);
            if(diff%x!=0) return -1;
            count+=(diff/x);
        }
        return count;
    }
};