class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            string word=strs[i];
            for(;j<min(result.size(),word.size());j++) if(result[j]!=word[j]) break;
            result=word.substr(0,j);
            if(result.length()==0) return "";
        }
        return result;
    }
};