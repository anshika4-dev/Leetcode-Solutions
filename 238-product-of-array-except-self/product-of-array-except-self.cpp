class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count=0;
        for(int x:nums) if(x==0) count++;
        if(count>=2){
            for(int i=0;i<nums.size();i++) nums[i]=0;
            return nums;
        }
        int prod=1;
        for(int i=0;i<nums.size();i++){
                if(nums[i]==0) continue;
                prod*=nums[i];
            }
        if(count==1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0) nums[i]=prod;
                else nums[i]=0;
            }
                            return nums;
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=prod/nums[i];
        }
        return nums;
    }
};