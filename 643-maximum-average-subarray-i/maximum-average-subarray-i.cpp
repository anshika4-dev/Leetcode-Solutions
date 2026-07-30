class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double left=0,avg=0,res=INT_MIN;
        for(double right=0;right<nums.size();right++){
            avg+=nums[right];
            if(right-left+1==k){
                double prod=avg/(double)k;
                res=max(res,prod);
                avg-=nums[left];
                left++;
            }
        }
        return res;
    }
};