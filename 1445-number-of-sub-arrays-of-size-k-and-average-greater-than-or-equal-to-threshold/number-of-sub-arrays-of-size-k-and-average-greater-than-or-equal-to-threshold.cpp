class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int left=0,count=0,curr=0;
        for(int right=0;right<arr.size();right++){
            curr+=arr[right];
            if(right-left+1==k){
                int avg=curr/k;
                if(avg>=threshold) count++;
                curr-=arr[left];
                left++;
            }
        }
        return count;
    }
};