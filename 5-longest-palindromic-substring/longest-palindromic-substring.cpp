class Solution {
public:
    string helper(string s,int left,int right){
        while(left>=0 && right<s.length() && s[left]==s[right]){
            left--;
            right++;
        }
        return s.substr(left+1,right-left-1);
    }
    string longestPalindrome(string s) {
        string res = "";
        for(int i = 0; i <s.length(); i++){
            string temp=helper(s,i,i+1);
            if(temp.length()>res.length()) res=temp;
            temp=helper(s,i,i);
            if(temp.length()>res.length()) res=temp;
        }
        return res;
    }
};
