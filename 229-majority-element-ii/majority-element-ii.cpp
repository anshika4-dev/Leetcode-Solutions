class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        int n=nums.size();
        vector<int>result;
        int y=n/3;
        for(int x:nums) m[x]++;
        for(auto &x:m){
            if(x.second>y) result.push_back(x.first);
        }
        return result;
    }
};