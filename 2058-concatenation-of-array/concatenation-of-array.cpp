class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(2*n,0);
        for(int i=0;i<nums.size();i++){
            result[i]=nums[i];
            result[n+i]=nums[i];
        }
        return result;
    }
};