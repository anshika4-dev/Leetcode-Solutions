class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long res=0,curr=0,left=0;
        unordered_map<int,int>m;
        for(int right=0;right<nums.size();right++){
            curr+=nums[right];
            m[nums[right]]++;
            while(m[nums[right]]>1){
                m[nums[left]]--;
                curr-=nums[left];
                left++;
            }
            if(right-left+1==k){
                res=max(curr,res);
                curr-=nums[left];
                m[nums[left]]--;
                left++;
            }
        }
        return res;
    }
};