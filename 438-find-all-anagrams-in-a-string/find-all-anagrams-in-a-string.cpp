class Solution {
public:
    bool anagram(vector<int>freq1,vector<int>freq2){
        for(int i=0;i<26;i++) if(freq1[i]!=freq2[i]) return false;
        return true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int>freq1(26,0),freq2(26,0),result;
        for(char x:p) freq1[x-'a']++;
        int left=0;
        for(int right=0;right<ssize(s);right++){
            freq2[s[right]-'a']++;
            if(right-left+1==ssize(p)){
                if(anagram(freq1,freq2)) result.push_back(left);
                freq2[s[left]-'a']--;
                left++;
            }
        }
        return result;
    }
};