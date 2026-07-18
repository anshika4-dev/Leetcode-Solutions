class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(char x:s) if(isalnum(x)) res+=tolower(x);
        string rev=res;
        reverse(rev.begin(),rev.end());
        return rev==res;
    }
};