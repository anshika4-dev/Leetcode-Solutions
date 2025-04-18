class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>result;
        for(int x:nums) m[x]++;
        for(auto x:m){
            if(x.second>1) result.push_back(x.first);
        }
        return result;
        
    }
};