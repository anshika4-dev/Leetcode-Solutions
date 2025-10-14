class Solution {
public:
    int maxDepth(string s) {
        int count=0,result=0;
        for(char x:s){
            if(x=='(') count++;
            result=max(count,result);
            if(x==')') count--;
        }
        return result;
    }
};