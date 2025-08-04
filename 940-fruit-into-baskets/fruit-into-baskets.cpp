class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0,max_freq=0;
        unordered_map<int,int>m;
        unordered_set<int>s;
        for(int right=0;right<fruits.size();right++){
            m[fruits[right]]++;
            s.insert(fruits[right]);
            while(s.size()>2){
                m[fruits[left]]--;
                if(m[fruits[left]]==0) s.erase(fruits[left]);
                left++;
            }
            max_freq=max(max_freq,right-left+1);
        }
        return max_freq;
    }
};