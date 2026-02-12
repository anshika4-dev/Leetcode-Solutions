class Solution {
public:
    int longestBalanced(string s) {
        int n=s.size(),ans=0;
        for(int i=0;i<n;i++){
            int freq[26]={0};
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int mn=INT_MAX,mx=0,distinct=0;
                for(int c=0;c<26;c++){
                    if(freq[c]>0){
                        distinct++;
                        mn=min(mn,freq[c]);
                        mx=max(mx,freq[c]);
                    }
                }
                if(distinct>0 && mn==mx) ans=max(ans,j-i+1);
            }
        }
        return ans;
    }
};