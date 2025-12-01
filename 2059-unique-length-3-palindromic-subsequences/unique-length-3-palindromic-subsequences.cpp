class Solution {
public:
    int countPalindromicSubsequence(string s) {
        //Are aapke liye kuch bhi \U0001f601
        unordered_map<char,pair<int,int>>m;
        for(int i=0;i<s.length();i++){
            if(!m.count(s[i]))
            m[s[i]].first=i;
            m[s[i]].second=i;
        }
        int count=0;
        for(auto &x:m){
            if(x.second.second-x.second.first<2) continue;
            unordered_set<char>s2(s.begin()+x.second.first+1,s.begin()+x.second.second);
            count+=s2.size();
        }
        return count;
    }
};