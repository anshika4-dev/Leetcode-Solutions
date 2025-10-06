class Solution {
public:
    int smallestAbsent(vector<int>& nums) {
        int result=accumulate(nums.begin(),nums.end(),0)/static_cast<int>(nums.size());
        unordered_set<int>s(nums.begin(),nums.end());
        if(result<0) result=0;
        while(1){
            result++;
            if(s.find(result)==s.end()) return result;
        }
        return -1;
    }
};