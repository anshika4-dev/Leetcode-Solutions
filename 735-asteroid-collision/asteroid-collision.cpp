class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        stack<int>st;
        for(int x:asteroids){
            bool destroy=false;
            while(!st.empty() && x<0 && st.top()>0){
                if(st.top()<abs(x)){
                    st.pop();
                    continue;
                }
                if(st.top()==abs(x)) st.pop();
                    destroy=true;
                    break;
            }
            if(!destroy) st.push(x);
        }
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};