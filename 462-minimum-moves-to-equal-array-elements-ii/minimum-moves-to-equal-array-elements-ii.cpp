class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int median=nums.size()%2==0?nums[nums.size()/2-1]:nums[nums.size()/2],res=0;
        for(int x:nums) res+=abs(median-x);
        return res;
    }
};