class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero=0,max_len=0,left=0;
        for(int right=0;right<nums.size();right++){
            if(nums[right]==0) zero++;
            while(zero>k && left<right){
                if(nums[left]==0) zero--;
                left++;
            }
            max_len=max(max_len,right-left+1);
        }
        return accumulate(nums.begin(),nums.end(),0)==0 && k==0?0:max_len;
    }
};