class Solution {
public:
    bool isValid(vector<int>& piles, int h,int speed){
        unsigned long long totalHours=0;
        for(int x:piles) totalHours+=(1ULL*x+(speed-1))/speed;
        return totalHours<=h; 

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1,high=*max_element(piles.begin(),piles.end()),ans=INT_MAX;
        while(low<=high){
            unsigned long long mid=low+(high-low)/2;
            if(isValid(piles,h,mid)){
                ans=mid;
                high=mid-1;
            }else low=mid+1;
        }
        return ans;
    }
};