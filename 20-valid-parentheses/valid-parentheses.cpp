class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char x:s){
            if(x=='(' || x=='{' || x=='[') st.push(x);
            else if(!st.empty() && ((x==']' && st.top()=='[') ||(x=='}' && st.top()=='{') || (x==')' && st.top()=='('))) st.pop();
            else return false;
        }
        return st.empty();

    }
};