class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size(),minSum=INT_MAX;
        for(int size=l;size<=r;size++) {
            int currentSum=0;
            for(int i=0;i<size;i++) 
            currentSum+=nums[i];
            if(currentSum>0) 
            minSum=min(minSum,currentSum);
            for(int i=size;i<n;i++){
                currentSum+=nums[i]-nums[i-size];
                if(currentSum>0) 
                minSum=min(minSum,currentSum);
            }
        }
        return (minSum==INT_MAX)?-1:minSum;
    }
};