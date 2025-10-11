class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>maxHeap(nums.begin(),nums.end());
        int result=0;
        while(k!=0){
            result=maxHeap.top();
            maxHeap.pop();
            k--;
        }
        return result;
    }
};