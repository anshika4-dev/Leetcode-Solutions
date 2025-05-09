class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto it=lower_bound(nums.begin(),nums.end(),target);
        int index=it-nums.begin();
        auto it1=upper_bound(nums.begin(),nums.end(),target);
        int index1=it1-nums.begin();
        if(index==nums.size() || nums[index]!=target) return {-1,-1};
        return {index,index1-1};
    }
};