class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        if(nums.size()%k!=0) return false;
                int n=nums.size()/k;
        unordered_map<int,int>m;
        for(int x:nums) m[x]++;
        for(auto x:m){
            if(x.second>n) return false;
        }
        return true;
    }
};