class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string>result;
        for(string x:folder){
           if(result.empty() || !x.starts_with(result.back()+"/" )) result.push_back(x);
        }
        return result;
    }
};