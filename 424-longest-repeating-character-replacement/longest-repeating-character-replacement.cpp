class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>v(26,0);
        int max_freq=0,left=0,max_len=0;
        for(int right=0;right<s.length();right++){
            v[s[right]-'A']++;
            max_freq=max(max_freq,v[s[right]-'A']);
            while((right-left+1)>max_freq+k){
                v[s[left]-'A']--;
                left++;
            }
            max_len=max(max_len,right-left+1);
        }
        return max_len;
    }
};