class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int l = prices.size(), j,i,profit = 0,x;
                   x=prices[0];
 for (i = 1; i < l; i++)
        {
            if(prices[i]<x)
                x=prices[i];
            else
            {   j=prices[i]-x;
                profit=max(j,profit);
            }
        }
            return profit;
     
    }
};