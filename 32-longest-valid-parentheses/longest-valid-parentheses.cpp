class Solution {
public:
    int longestValidParentheses(string s) {
        int open=0,close=0,count=0;
        for(char c:s){
            if(c=='(') open++;
            else close++;
            if(open<close){
                open=0;
                close=0;
            }
            if(open==close) count=max(count,open*2);
        }
        open=0,close=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='(') open++;
            else close++;
            if(open>close){
                open=0;
                close=0;
            }
            if(open==close) count=max(count,open*2);
        }
        return count;
    }
};