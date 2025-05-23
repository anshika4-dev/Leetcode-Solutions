class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long total = 0;
        int n = 0;
        long long min_diff = 1 << 30;
        for (auto& x : nums){
            long long y = x ^ k;
            total += max((long long) x , y);
            if (x < y){
                n = 1 - n;
            }
            min_diff = min(min_diff, abs(x - y));
        }
        return total - n * min_diff;
    }
};