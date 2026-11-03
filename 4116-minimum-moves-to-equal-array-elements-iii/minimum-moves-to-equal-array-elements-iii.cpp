class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m=*max_element(nums.begin(),nums.end()),res=0;
        for(int x:nums) res+=abs(x-m);
        return res;
    }
};