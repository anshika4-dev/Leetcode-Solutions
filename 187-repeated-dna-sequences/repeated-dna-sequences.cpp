class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if(s.length()<10) return {};
        unordered_map<string,int>m;
        for(int i=0;i<s.length()-9;i++){
            m[s.substr(i,10)]++;
        }
        vector<string>result;
        for(auto &x:m){
            if(x.second>1) result.push_back(x.first);
        }
        return result;
    }
};