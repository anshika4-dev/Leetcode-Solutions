class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        set<int>s(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int m=target-nums[i];
            if(s.find(m)!=s.end()) for(int j=i+1;j<nums.size();j++) if(m==nums[j]) return {i,j};
        }
        return {};
    }
};