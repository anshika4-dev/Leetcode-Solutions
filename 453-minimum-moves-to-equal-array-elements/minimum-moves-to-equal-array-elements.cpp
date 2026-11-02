class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m=*min_element(nums.begin(),nums.end());
        int res=0;
        for(int x:nums) res+=(x-m);
        return res;
    }
};