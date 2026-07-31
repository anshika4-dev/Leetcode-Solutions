class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pref=1,suff=1,res=INT_MIN;
        for(int i=0;i<nums.size();i++){
            pref*=nums[i];
            suff*=nums[nums.size()-i-1];
            res=max({pref,suff,res});
            if(pref==0) pref=1;
            if(suff==0) suff=1;
        }
        return res;
    }
};