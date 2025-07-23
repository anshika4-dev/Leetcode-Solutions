class Solution {
public:
    int maximumGain(string s, int ax, int ay) {
        stack<char>st;
        int score=0;
        if(ax>ay){
            for(char x:s){
                if(!st.empty() && st.top()=='a' && x=='b'){
                    score+=ax;
                    st.pop();
                }
                else st.push(x);
            }
            s.clear();
            while(!st.empty()){
                s+=st.top();
                st.pop();
            }
            reverse(s.begin(),s.end());
            for(char x:s){
                if(!st.empty() && st.top()=='b' && x=='a'){
                    score+=ay;
                    st.pop();
                }
                else st.push(x);
            }
        }
        else{
             for(char x:s){
                if(!st.empty() && st.top()=='b' && x=='a'){
                    score+=ay;
                    st.pop();
                }
                else st.push(x);
            }
            s.clear();
            while(!st.empty()){
                s+=st.top();
                st.pop();
            }
            reverse(s.begin(),s.end());
            for(char x:s){
                cout<<x<<" ";
                if(!st.empty() && st.top()=='a' && x=='b'){
                    score+=ax;
                    st.pop();
                }
                else st.push(x);
            }
        }
        return score;
    }
};