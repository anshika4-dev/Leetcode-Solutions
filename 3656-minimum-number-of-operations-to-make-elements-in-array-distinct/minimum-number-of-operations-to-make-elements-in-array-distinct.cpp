class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> s;
        int n = nums.size();
        for (int i = n - 1; i >= 0; --i) {
            if (s.count(nums[i])) {
                return (i + 3) / 3;
            }
            s.insert(nums[i]);
        }
        return 0;
    }
};
