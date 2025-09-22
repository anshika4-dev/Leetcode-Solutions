class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        for(char c:s) if(isalnum(c)) result+=tolower(c);
        string res=result;
        reverse(res.begin(),res.end());
        return res==result;
    }
};