class Solution {
public:
    int minOperations(vector<int>& nums) {
        return unordered_set<int>(nums.begin(),nums.end()).size()==1?0:1;
    }
};