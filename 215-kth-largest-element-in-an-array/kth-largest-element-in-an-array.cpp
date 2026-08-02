class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>maxHeap(nums.begin(),nums.end());
        int res=0;
        while(k--){
            res=maxHeap.top();
            maxHeap.pop();
        }
        return res;
    }
};