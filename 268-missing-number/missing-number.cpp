class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int temp=0;
        for(int i=1;i<=nums.size();i++) temp^=i;
        for(int x:nums) temp^=x;
        return temp;
    }
};