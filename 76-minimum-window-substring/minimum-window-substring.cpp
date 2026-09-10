class Solution {
public:
    bool isvalid(vector<int> &freq1, vector<int> &freq2){
        for(int i=0;i<128;i++) if(freq1[i]<freq2[i]) return false;
        return true;
    }
    string minWindow(string s, string t) {
        if(t.size()>s.size()) return "";
        vector<int>freq1(128,0),freq2(128,0);
        int left=0,len=INT_MAX,start=-1;
        for(char x:t) freq2[x]++;
        for(int right=0;right<s.size();right++){
            freq1[s[right]]++;
            while(isvalid(freq1,freq2)){
                if(right-left+1<len){
                    len=right-left+1;
                    start=left;
                }
                freq1[s[left]]--;
                left++;
            }
        }
        return start==-1?"":s.substr(start,len);
    }
};