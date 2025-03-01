class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                 nums[i]*=2;
                 nums[i+1]=0;
            }
        }
        vector<int>result;
        for(int x:nums){
            if(x!=0) result.push_back(x);
        }
        int times=nums.size()-result.size();
        result.insert(result.end(),times,0);
        return result;
    }
};