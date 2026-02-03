class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        unordered_map<int,int>m;
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]) st.pop();
            m[nums2[i]]=st.empty()?-1:st.top();
            st.push(nums2[i]);
        }
        for(int x:nums1) result.push_back(m[x]);
        return result;
    }
};