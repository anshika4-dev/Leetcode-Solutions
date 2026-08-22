class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>res(nums.size(),0),pref(nums.size(),0),suff(nums.size(),0);
        pref[0]=nums[0];
        suff[nums.size()-1]=nums[nums.size()-1];
        for(int i=1;i<nums.size();i++) pref[i]=pref[i-1]*nums[i];
        for(int i=nums.size()-2;i>=0;i--) suff[i]=suff[i+1]*nums[i];
        res[0]=suff[1];
        res.back()=pref[nums.size()-2];
        for(int i=1;i<nums.size()-1;i++) res[i]=pref[i-1]*suff[i+1];
        return res;
        
    }
};