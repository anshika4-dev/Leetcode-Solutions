class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>m;
        int left=0,right=0,max_len=0;
        for(;right<s.length();right++){
            m[s[right]]++;
            while(m[s[right]]>1){
                m[s[left]]--;
                left++;
        
            }
            max_len=max(max_len,right-left+1);
        }
        return max_len;

    }
};