/*
 * @lc app=leetcode id=1475 lang=cpp
 *
 * [1475] Final Prices With a Special Discount in a Shop
 */

// @lc code=start
class Solution
{
public:
    vector<int> finalPrices(vector<int> &prices)
    {
        int l = prices.size(), i, j;
        for (i = 0; i < l; i++)
        {
            for (j = i + 1; j <= l - 1; j++)
            {
                if (prices[j] <= prices[i])
                {
                    prices[i] = prices[i] - prices[j];
                    break;
                }
            }
        }
        return prices;
    };
    // @lc code=end
