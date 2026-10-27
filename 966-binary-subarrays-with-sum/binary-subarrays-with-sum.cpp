class Solution {
public:
    int helper(vector<int> &nums, int k){
        int left=0,sum=0,res=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(left<=right && sum>k){
                sum-=nums[left];
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