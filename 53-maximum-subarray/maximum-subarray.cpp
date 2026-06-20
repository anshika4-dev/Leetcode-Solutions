class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar=INT_MIN,maxEnding=0;
        for(int i=0;i<nums.size();i++){
            maxEnding=max(nums[i],nums[i]+maxEnding);
            maxSoFar=max(maxSoFar,maxEnding);
        }
        return maxSoFar;
    }
};