class Solution {
public:
    string processStr(string s) {
        string result="";
        for(char x:s){
            if(x=='*'){
                if(!result.empty()) result.pop_back();
            }
            else if(x=='#') result+=result;
            else if(x=='%') reverse(result.begin(),result.end());
            else result+=x;
        }
        return result;
    }
};