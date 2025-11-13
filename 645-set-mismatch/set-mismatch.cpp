class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>result;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++) if(nums[i]==nums[i-1]) result.push_back(nums[i]);
        unordered_set<int>s(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++) if(s.find(i)==s.end()) result.push_back(i);
        return result;
    }
};