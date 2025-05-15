class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>result;
        bool zero=false,one=false;
        for(int i=0;i<groups.size();i++){
            if(groups[i]==0 && zero==false){
                result.push_back(words[i]);
                one=false;
                zero=true;
            }
            else if(groups[i]==1 && one==false){
                result.push_back(words[i]);
                one=true;
                zero=false;
            }
        }
        return result;
    }
};