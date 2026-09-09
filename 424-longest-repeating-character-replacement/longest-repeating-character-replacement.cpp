class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int res=0,left=0;
        for(int right=0;right<ssize(s);right++){
            freq[s[right]-'A']++;
            int maxi=*max_element(freq.begin(),freq.end());
            while(k+maxi<right-left+1){
                freq[s[left]-'A']--;
                left++;
            }
            res=max(res,right-left+1);
        }
        return res;
    }
};