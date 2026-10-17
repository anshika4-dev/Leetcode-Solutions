class Solution {
public:
    int digit_sum(int temp){
        int sum=0;
        while(temp!=0){
            sum+=temp%10;
            temp/=10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size(),swaps=0;
        vector<bool>temp(n,false);
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++) v[i]={digit_sum(nums[i]),i};
        sort(v.begin(),v.end(),[&](auto &a,auto &b){
            if(a.first==b.first) return nums[a.second]<nums[b.second];
            return a.first<b.first;
        });
        for(int i=0;i<n;i++){
            if(temp[i] || v[i].second==i) continue;
            int len=0,j=i;
            while(!temp[j]){
                temp[j]=true;
                j=v[j].second;
                len++;
            }
            swaps+=(len-1);
        }
        return swaps;
    }
};