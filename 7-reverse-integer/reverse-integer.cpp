class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        // Handle negative numbers separately
        if (x < 0) {
            std::reverse(s.begin() + 1, s.end());
        } else {
            std::reverse(s.begin(), s.end());
        }

        // Convert back to an integer and check for overflow
        long long y = stoll(s);
        if (y > INT_MAX || y < INT_MIN) {
            return 0;
        }
        return static_cast<int>(y);
    }
};
