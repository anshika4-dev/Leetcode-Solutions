class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long left=0,curr=0,res=0;
        unordered_map<int,int>m;
        for(int right=0;right<nums.size();right++){
            m[nums[right]]++;
            curr+=nums[right];
            while(m[nums[right]]>1){
                m[nums[left]]--;
                curr-=nums[left];
                left++;
            }
            if(right-left+1==k){
                res=max(res,curr);
                m[nums[left]]--;
                curr-=nums[left];
                left++;
            }

        }
        return res;
    }
};