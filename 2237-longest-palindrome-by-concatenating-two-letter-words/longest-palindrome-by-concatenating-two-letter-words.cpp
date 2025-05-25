class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>m;
        int sum=0;
        for(string x:words){
            string temp=x;
            swap(temp[0],temp[1]);
            if(m.count(temp)){
                m[temp]--;
                if(m[temp]==0) m.erase(temp);
                sum+=4;
            }
            else m[x]++;
        }
        for(auto x:m){
            if(x.first[0]==x.first[1]){
                sum+=2;
                break;
            }
        }
        return sum;
    }
};