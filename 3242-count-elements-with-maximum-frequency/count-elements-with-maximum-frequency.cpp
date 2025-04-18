class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int count=0,maxFreq=0;
        unordered_map<int,int>m;
        for(int x:nums){
            m[x]++;
            maxFreq=max(maxFreq,m[x]);
        }
        for(auto x:m){
            if(x.second==maxFreq) count+=x.second;
        }
        return count;

        
    }
};