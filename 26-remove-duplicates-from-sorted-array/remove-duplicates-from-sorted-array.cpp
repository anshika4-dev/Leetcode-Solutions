class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        int k=s.size();
        int j=0;
        for(int x:s){
            nums[j]=x;
            j++;
        }
        return k;
    }
};