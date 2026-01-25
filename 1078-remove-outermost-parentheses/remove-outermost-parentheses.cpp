class Solution {
public:
    string removeOuterParentheses(string s) {
        string result="";
        int depth=0;
        for(char x:s){
            if(x=='('){
                if(depth>0) result+=x;
                depth++;
            } 
            else if(x==')'){
                depth--;
                if(depth>0) result+=x;
            }
        }
        return result;
    }
};