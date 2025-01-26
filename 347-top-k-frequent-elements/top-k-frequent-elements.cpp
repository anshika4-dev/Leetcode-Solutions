class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int x:nums) m[x]++;
        priority_queue<pair<int,int>>maxHeap;
        for(auto& x:m){
            maxHeap.push({x.second,x.first});
        }
        vector<int>result;
        while(!maxHeap.empty() && k--){
result.push_back(maxHeap.top().second);
maxHeap.pop();
        }
        return result;

    }
};