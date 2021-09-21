/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int l = prices.size(), j, i, profi = 0, x;
        x = prices[0];
        for (i = 1; i < l; i++)
        {
            if (prices[i] < x)
                x = prices[i];
            else
            {
                j = prices[i] - x;
                profi = max(j, profi);
            }
        }
        return profi;
    }
};
// @lc code=end
