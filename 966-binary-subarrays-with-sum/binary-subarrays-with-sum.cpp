class Solution {
public:
    int helper(vector<int>& nums, int goal){
        int curr=0,left=0,res=0;
        for(int right=0;right<nums.size();right++){
            curr+=nums[right];
            while(left<=right && curr>goal){
                curr-=nums[left];
                left++;
            }
            res+=(right-left+1);
        }
        return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums,goal)-helper(nums,goal-1);
    }
};