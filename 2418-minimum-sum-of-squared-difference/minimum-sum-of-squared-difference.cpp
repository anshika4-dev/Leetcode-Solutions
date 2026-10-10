class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        long long k = k1 + k2;
        int n = nums1.size();
        
        // Find the maximum possible difference to size our bucket array
        int max_diff = 0;
        for (int i = 0; i < n; i++) {
            max_diff = max(max_diff, abs(nums1[i] - nums2[i]));
        }
        
        // If the max difference is already 0, the sum of squares is 0
        if (max_diff == 0) return 0;
        
        // Use a frequency array (bucket sort style) to count differences
        vector<long long> counts(max_diff + 1, 0);
        for (int i = 0; i < n; i++) {
            counts[abs(nums1[i] - nums2[i])]++;
        }
        
        // Process from the largest difference down to 1
        for (int diff = max_diff; diff > 0 && k > 0; diff--) {
            if (counts[diff] == 0) continue;
            
            // Determine how many elements we can fully decrement by 1
            long long take = min(k, counts[diff]);
            
            counts[diff] -= take;
            counts[diff - 1] += take;
            k -= take;
        }
        
        // Calculate the final sum of squares
        long long res = 0;
        for (long long diff = 1; diff <= max_diff; diff++) {
            if (counts[diff] > 0) {
                res += counts[diff] * (diff * diff);
            }
        }
        
        return res;
    }
};
