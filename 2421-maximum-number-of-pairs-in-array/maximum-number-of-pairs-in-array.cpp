class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        unordered_map<int,int>m;
        int pairs=0;
        for(int x:nums) m[x]++;
        for(auto &x:m){
            pairs += x.second/2;
        }
        int leftovers=nums.size()-pairs*2;
        return {pairs,leftovers};
    }
};