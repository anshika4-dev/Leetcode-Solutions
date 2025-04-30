class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum=0,sum1=0;
        sort(nums.begin(),nums.end());
        vector<int>result;
        for(int x:nums) sum +=x;
        for(int i=nums.size()-1;i>=0;i--){
            result.push_back(nums[i]);
            sum1 += nums[i];
            sum-=nums[i];
            if(sum1>sum) break;
        }
        return result;
    }
};