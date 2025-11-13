class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>res1,res2;
        for(int i=0;i<n;i++) res1.push_back(nums[i]);
        for(int i=n;i<nums.size();i++) res2.push_back(nums[i]);
        vector<int>result;
        for(int i=0;i<n;i++){
            result.push_back(res1[i]);
            result.push_back(res2[i]);
        }
        return result;
    }
};