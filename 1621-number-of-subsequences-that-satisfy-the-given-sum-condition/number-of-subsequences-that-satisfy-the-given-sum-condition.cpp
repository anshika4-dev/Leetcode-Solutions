class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        const int mod=1e9+7;
        int count=0;
        vector<int>power(nums.size(),1);
        for(int i=1;i<nums.size();i++) power[i]=(power[i-1]*2)%mod;
        int left=0,right=nums.size()-1;
        while(left<=right){
            if(nums[left]+nums[right]<=target){
                count=(count+power[right-left])%mod;
                left++;
            }
            else right--;
        }
        return count;
    }
};