class Solution {
public:
    int helper(vector<int>& nums,int goal){
        long long left=0,right=0,sum=0,res=0;
        while(right<nums.size()){
            sum+=nums[right];
            while(left<=right && sum>goal){
                sum-=nums[left];
                left++;
            }
            res+=right-left+1;
            right++;
        }
        return res;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums,goal)-helper(nums,goal-1);
    }
};