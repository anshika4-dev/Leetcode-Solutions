class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>m;
        int res=0,left=0;
        for(int right=0;right<s.size();right++){
            m[s[right]]++;
            while(m[s[right]]>2){
                m[s[left]]--;
                left++;
            }
            res=max(res,right-left+1);
        }
        return res;
    }
};