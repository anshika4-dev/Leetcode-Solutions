class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum=0,count=0;
        if(costs[0]>coins) return 0;
        for(int i=0;i<costs.size();i++){
            sum+=costs[i];
            if(sum==coins || sum<coins){
                count++;
            }
            else{
                return count;
            }
            
        }
        return count;
    }
};