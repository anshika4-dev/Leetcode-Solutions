class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums) m[x]++;
        for(auto p:m) if(p.second>(nums.size()/2)) return p.first;
        return -1;
    }
};