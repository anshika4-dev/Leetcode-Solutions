class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        long long res=(1LL*n*(n+1))/2,left=0;
        unordered_map<char,int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
            while(m.size()>2){
                m[s[left]]--;
                if(m[s[left]]==0) m.erase(s[left]);
                left++;
            }
            res-=(i-left+1);
        }
        return res;
    }
};