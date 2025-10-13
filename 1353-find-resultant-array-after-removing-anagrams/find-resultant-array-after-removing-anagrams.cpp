class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<pair<string,string>>v;
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            sort(temp.begin(),temp.end());
            if(v.empty()) v.push_back({temp,words[i]});
            else if(v.back().first!=temp) v.push_back({temp,words[i]});
        }
        vector<string>res;
        for(auto x:v) res.push_back(x.second);
        return res;
    }
};