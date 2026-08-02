class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>maxHeap;
        vector<int>result;
        unordered_map<int,int>m;
        for(int x:nums) m[x]++;
        for(auto &p:m) maxHeap.push({p.second,p.first});
        while(!maxHeap.empty() && k--){
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        return result;
    }
};