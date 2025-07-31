class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> result;
        unordered_set<int> prev;
        
        for (int num : arr) {
            unordered_set<int> curr;
            curr.insert(num);  // OR with itself (new subarray starting here)

            for (int x : prev) {
                curr.insert(x | num);  // OR with previous subarray results
            }

            // Add current ORs to the final result set
            for (int val : curr) {
                result.insert(val);
            }

            // Move curr to prev for next iteration
            prev = curr;
        }
        
        return result.size();  // Total unique OR values
    }
};

