class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int sum=0,max_sum=0,left=0,right=0;
        unordered_map<int,int>m;
        for(;right<nums.size();right++){
            sum+=nums[right];
            m[nums[right]]++;
            while(m[nums[right]]>1 && left<=right){
                sum-=nums[left];
                m[nums[left]]--;
                left++;
            }
            max_sum=max(max_sum,sum);
        }
        return max_sum;
    }
};