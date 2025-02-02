class Solution {
public:
    bool check(vector<int>& nums) {
    //Welcome \U0001f338Miss Enchanted Weaver of Dreams...\U0001f4ab
    //Jis din welcome message likha hai pahle se, majal se us din aapne ques khud se kiya ho
      int count = 0, n = nums.size();
        for (int i = 0; i < n; i++) 
            if (nums[i] > nums[(i+1)%n] && ++count > 1) return false;
        return true;
    }
};