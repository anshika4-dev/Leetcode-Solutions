class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int result=0;
        int mini=prices[0];
        for(int i=1;i<prices.size();i++){
            if(mini<prices[i]){
                result=max(result,prices[i]-mini);
            }else mini=prices[i];
        }
        return result;
    }
};