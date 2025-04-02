class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>maxHeap;
        for(auto x:nums) maxHeap.push(x);
        while(--k){
            maxHeap.pop();
            
        }
        return maxHeap.top();
    }
};