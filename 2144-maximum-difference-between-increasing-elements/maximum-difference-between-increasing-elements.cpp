class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int result=-1;
        int mini=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]>mini){
                result=max(result,nums[i]-mini);
            }else mini=nums[i];
        }
        return result;
    }
};