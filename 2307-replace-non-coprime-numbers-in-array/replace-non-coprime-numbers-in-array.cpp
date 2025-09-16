class Solution {
public:
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        stack<int>st;
        for(int x:nums){
            int curr=x;
            while(!st.empty() && gcd(st.top(),curr)!=1){
                curr=lcm(st.top(),curr);
                st.pop();
            }
            st.push(curr);
        }
        vector<int>num;
        while(!st.empty()){
            num.push_back(st.top());
            st.pop();
        }
        reverse(num.begin(),num.end());
        return num;
    }
};