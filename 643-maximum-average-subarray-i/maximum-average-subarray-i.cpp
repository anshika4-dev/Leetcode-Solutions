class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double result=INT_MIN,curr=0;
        int left=0;
        for(int right=0;right<nums.size();right++){
            curr+=nums[right];
            if(right-left+1==k){
                result=max(result,curr/k);
                curr-=nums[left];
                left++;
            }
        }
        return result;
    }
};