class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result=strs[0];
        for(int i=1;i<strs.size();i++){
            string word=strs[i];
            int j=0;
            for(;j<min(result.length(),word.length());j++) if(word[j]!=result[j]) break;
            result = word.substr(0,j);
            if(result.length()==0) break;
        }
        return result;
    }
};