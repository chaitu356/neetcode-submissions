class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minimum=prices[0];
        int profit;
        int maxp=INT_MIN;
        for(int i=0;i<prices.size();i++){
            profit=prices[i]-minimum;
            maxp=max(maxp,profit);
            minimum=min(minimum,prices[i]);


        }

        return maxp;
        
    }
};
