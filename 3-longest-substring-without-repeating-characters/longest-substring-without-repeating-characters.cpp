class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result=0,left=0;
        unordered_map<char,int>m;
        for(int right=0;right<s.size();right++){
            m[s[right]]++;
            while(m[s[right]]>1){
                m[s[left]]--;
                left++;
            }
            result=max(result,right-left+1);
        }
        return result;
    }
};