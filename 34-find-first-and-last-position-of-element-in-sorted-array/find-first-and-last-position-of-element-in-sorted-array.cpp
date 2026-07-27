class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1,x=-1,y=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target) high=mid-1;
            else low=mid+1;
        }
        x=low;
        low=0,high=nums.size()-1;
         while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>target) high=mid-1;
            else low=mid+1;
        }
        y=low-1;
        if(x<nums.size() && nums[x]==target) return {x,y};
        return {-1,-1};
    }
};