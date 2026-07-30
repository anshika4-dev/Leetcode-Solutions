class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count=0,ans=0,left=0;
        for(int right=0;right<arr.size();right++){
            ans+=arr[right];
            if(right-left+1==k){
                int avg=ans/k;
                if(avg>=threshold) count++;
                ans-=arr[left];
                left++;
            }
        }
        return count;
    }
};