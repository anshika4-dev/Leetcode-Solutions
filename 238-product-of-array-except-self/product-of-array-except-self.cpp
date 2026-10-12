class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res(nums.size(),0);
        int zero=0,mul=1;
        for(int i:nums){
            if(i==0){
                zero++;
                continue;
            }
            mul*=i;
        }
        if(zero>1) return res;
        if(zero==1) for(int i=0;i<nums.size();i++) if(nums[i]==0){
            res[i]=mul;
            return res;
        }
        for(int i=0;i<nums.size();i++) res[i]=mul/nums[i];
        return res;
    }
};