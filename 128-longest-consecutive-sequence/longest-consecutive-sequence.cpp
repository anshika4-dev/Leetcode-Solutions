class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1,maxCount=1;
        if(nums.size()==0) return 0;
        if(nums.size()==1) return count;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]) continue;
            if((nums[i-1]+1)==nums[i]){
                count++;
            }else count=1;
            maxCount=max(maxCount,count);
        }
        return maxCount;
    }
};