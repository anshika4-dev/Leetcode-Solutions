class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int min_ele=min_element(nums.begin(),nums.end())-nums.begin();
        int max_ele=max_element(nums.begin(),nums.end())-nums.begin();
        cout<<min_ele<<" "<<max_ele;
        return min_ele>max_ele?min(min_ele+1,min(max_ele+1+(int)nums.size()-min_ele,(int)nums.size()-max_ele)):min(max_ele+1,min(min_ele+1+(int)nums.size()-max_ele,(int)nums.size()-min_ele));
    }
};