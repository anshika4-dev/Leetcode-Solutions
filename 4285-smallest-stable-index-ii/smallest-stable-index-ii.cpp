class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> maxe(nums.size(),-1),mine(nums.size(),1e9);
        maxe[0]=nums[0];
        for(int i=1;i<nums.size();i++) maxe[i]=max(maxe[i-1],nums[i]);
        mine.back()=nums.back();
        for(int i=nums.size()-2;i>=0;i--) mine[i]=min(mine[i+1],nums[i]);
        for(int i=0;i<nums.size();i++) if(maxe[i]-mine[i]<=k) return i;
        return -1;
    }
};