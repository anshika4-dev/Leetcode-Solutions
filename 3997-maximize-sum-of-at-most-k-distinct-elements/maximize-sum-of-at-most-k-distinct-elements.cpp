class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int,greater<int>>s(nums.begin(),nums.end());
        vector<int>result;
        for(int x:s){
            if(k==0) break;
            result.push_back(x);
            k--;
        }
        return result;
    }
};