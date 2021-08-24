/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int m, n, i, j, wealthiest = 0, sum;
        m = accounts.size();
        for (i = 0; i < m; i++)
        {
            n = accounts[i].size();
            sum = 0;
            for (j = 0; j < n; j++)
            {
                sum += accounts[i][j];
            }
            wealthiest = max(wealthiest, sum);
        }
        return wealthiest;
    }
};
// @lc code=end
