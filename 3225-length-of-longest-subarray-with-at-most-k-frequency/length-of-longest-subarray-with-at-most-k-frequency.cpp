class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int left=0,res=0;
        unordered_map<int,int>m;
        for(int right=0;right<nums.size();right++){
            m[nums[right]]++;
            while(m[nums[right]]>k){
                m[nums[left]]--;
                left++;
            }
            res=max(res,right-left+1);
            
        }
        return res;
    }
};