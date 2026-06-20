class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            string words=strs[i];
            for(;j<min(result.size(),words.size());j++) if(result[j]!=words[j]) break;
            result=words.substr(0,j);
            if(result.size()==0) break;
        }
        return result;
    }
};