class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        bool yes=false;
        int result=0;
        for(int x:nums){
            result^=x;
            if(x!=0) yes=true;
        }
        if(yes==false) return 0;
        return result==0?nums.size()-1:nums.size();
    }
};