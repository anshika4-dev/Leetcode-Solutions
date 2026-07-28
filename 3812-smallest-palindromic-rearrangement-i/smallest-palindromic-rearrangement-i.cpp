class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> cnt(26, 0);
        for (char c : s) {
            cnt[c - 'a']++;
        }
        string left = "";
        string mid = "";
        for (int i = 0; i < 26; i++) {
            if (cnt[i] % 2 == 1) {
                mid = string(1, char('a' + i)); // only one odd allowed
            }
            left += string(cnt[i] / 2, char('a' + i));
        }
        string right = left;
        reverse(right.begin(), right.end());
        return left + mid + right;
    }
};