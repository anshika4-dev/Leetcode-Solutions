class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=0,mul=1;
        vector<int>res(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
                continue;
            }
            mul*=nums[i];
        }
        if(count>1) return res;
        if(count==1) for(int i=0;i<nums.size();i++) if(nums[i]==0){
            res[i]=mul;
            return res;
        }
        for(int i=0;i<nums.size();i++) res[i]=mul/nums[i];
        return res;
    }
};