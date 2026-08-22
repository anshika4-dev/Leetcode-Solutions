class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int left=0,count=0,curr=1;
        for(int right=0;right<nums.size();right++){
            curr*=nums[right];
            while(left<= right && curr>=k){
                curr/=nums[left];
                left++;
            }
            count+=(right-left+1);
        }
        return count;
    }
};