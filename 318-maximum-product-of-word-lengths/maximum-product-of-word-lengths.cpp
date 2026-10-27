class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n=words.size(), res=0;
        vector<int>v(n,0);
        for(int i=0;i<words.size();i++) for(auto x:words[i]) v[i]|=(1<<(x-'a'));
        for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) if((v[i]&v[j])==0) res=max(res,(int)words[i].size()*(int)words[j].size());
        return res;
    }
};