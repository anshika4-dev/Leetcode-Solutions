class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>maxHeap(nums.begin(),nums.end());
        int x=maxHeap.top();
        maxHeap.pop();
        int y=maxHeap.top();
        return (x-1)*(y-1);
    }
};