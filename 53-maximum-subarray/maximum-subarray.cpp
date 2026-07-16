class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxEndingHere=0,maxSoFar=INT_MIN;
        for(int i=0;i<nums.size();i++){
            maxEndingHere=max(nums[i]+maxEndingHere,nums[i]);
            maxSoFar=max(maxEndingHere,maxSoFar);
        }
        return maxSoFar;
    }
};