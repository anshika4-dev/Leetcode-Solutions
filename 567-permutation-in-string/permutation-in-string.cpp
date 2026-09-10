class Solution {
public:
    bool isAnagram(vector<int>freq1,vector<int>freq2){
        for(int i=0;i<26;i++) if(freq1[i]!=freq2[i]) return false;
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int>freq1(26,0),freq2(26,0);
        int left=0;
        for(char x:s1) freq1[x-'a']++;
        for(int right=0;right<ssize(s2);right++){
            freq2[s2[right]-'a']++;
            if(right-left+1==ssize(s1)){
                if(isAnagram(freq1,freq2)) return true;
                freq2[s2[left]-'a']--;
                left++;
            }
        } 
        return false;
    }
};