class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        int result=0;
        int large=0;
        for(int x:nums){
            m[x]++;
            large=max(large,m[x]);
        } 
        for(auto &x:m) if(x.second==large) result+=x.second;
        return result;
    }
};