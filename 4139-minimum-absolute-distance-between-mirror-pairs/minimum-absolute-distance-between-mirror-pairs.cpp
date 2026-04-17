class Solution {
public:
int rev(int x){
int n=0;
while(x){
n=n*10+x%10;
x/=10;
}
return n;
}

int minMirrorPairDistance(vector<int>& nums) {
unordered_map<int,int>mp;
int ans=INT_MAX;

for(int j=0;j<nums.size();j++){
if(mp.count(nums[j])) ans=min(ans,j-mp[nums[j]]);

mp[rev(nums[j])]=j;
}

return ans==INT_MAX?-1:ans;
}
};