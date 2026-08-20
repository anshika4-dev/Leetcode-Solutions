class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>result;
        int left=0;
        priority_queue<pair<int,int>>maxHeap;
        for(int right=0;right<nums.size();right++){
            maxHeap.push({nums[right],right});
            if((right-left+1)==k){
                while(maxHeap.top().second<left) maxHeap.pop();
                result.push_back(maxHeap.top().first);
                left++;
            }
        }
        return result;
    }
};