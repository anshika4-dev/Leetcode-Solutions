class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSoFar=INT_MIN, maxEndingHere=0;
        for(int i=0;i<nums.size();i++){
            maxEndingHere=max(nums[i],maxEndingHere+nums[i]);
            maxSoFar=max(maxSoFar,maxEndingHere);
        }
        return maxSoFar;
    }
};