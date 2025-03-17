class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int x:nums) m[x]++;
        for(auto &x:m){
            if(x.second%2!=0) return false;
        }
        return true;
    }
};