class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        set<int>s(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(s.find(diff)!=s.end()) for(int j=i+1;j<nums.size();j++) if(nums[j]==diff) return {j,i};
        }
        return {};
    }
};