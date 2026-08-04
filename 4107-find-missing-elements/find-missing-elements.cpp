class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        ranges::sort(nums);
        vector<int>res;
        int j=0;
        for(int i=nums[0];i<=nums.back();i++){
            if(i==nums[j]) j++;
            else res.push_back(i);
        } 
        return res;
    }
};