class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n=heights.size();
        vector<int>left(n,-1), right(n,n);
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            left[i]=!st.empty()?st.top():-1;
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
            right[i]=!st.empty()?st.top():n;
            st.push(i);
        }
        int result=0;
        for(int i=0;i<n;i++) result=max(result,(right[i]-left[i]-1)*heights[i]);
        return result;
    }
};