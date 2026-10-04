class Solution {
public:
    bool checkValidString(string s) {
        int curr=0,diff=0;
        for(char x:s){
            if(x=='*') diff++;
            else curr=x=='('?curr+1:curr-1;
            if(curr+diff<0) return false;
        }
        //cout<<curr<<" "<<diff<<endl;
        curr=0,diff=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='*') diff++;
            else curr=s[i]==')'?curr+1:curr-1;
            if(curr+diff<0) return false;
        }
        //cout<<curr<<" "<<diff;
        return diff+curr>=0;
    }
};