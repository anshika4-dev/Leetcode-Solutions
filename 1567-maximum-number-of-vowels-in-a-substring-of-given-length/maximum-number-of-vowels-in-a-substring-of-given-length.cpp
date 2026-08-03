class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0,res=0,curr=0;
        for(int right=0;right<s.size();right++){
            if(s[right]=='a' || s[right]=='e' || s[right]=='i' || s[right]=='o' || s[right]=='u') curr++;
            if(right-left+1==k){
                res=max(res,curr);
                if(s[left]=='a' || s[left]=='e' || s[left]=='i' || s[left]=='o' || s[left]=='u') curr--;
                left++;
            }
        }
        return res;
    }
};