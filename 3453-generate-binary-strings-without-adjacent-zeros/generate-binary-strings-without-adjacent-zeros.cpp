class Solution {
public:
    void helper(vector<string> &v,string temp,int n){
        if(temp.size()==n){
            v.push_back(temp);
            return;
        }
        if(temp.empty() || temp.back()=='1'){
            helper(v,temp+"0",n);
            helper(v,temp+"1",n);
        }else helper(v,temp+"1",n);
    }
    vector<string> validStrings(int n) {
        vector<string>v;
        string temp="";
        helper(v,temp,n);
        return v;
    }
};