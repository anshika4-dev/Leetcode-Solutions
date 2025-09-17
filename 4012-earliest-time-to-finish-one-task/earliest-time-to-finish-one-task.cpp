class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int result=INT_MAX;
        for(auto x:tasks){
            result=min(result,x[0]+x[1]);
        }
        return result;
    }
};