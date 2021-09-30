/*
 * @lc app=leetcode id=1351 lang=cpp
 *
 * [1351] Count Negative Numbers in a Sorted Matrix
 */

// @lc code=start
class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int m = grid.size(), n, i, j, c = 0;
        for (i = m - 1; i >= 0; i--)
        {
            n = grid[i].size();
            for (j = n - 1; j >= 0; j--)
            {
                if (grid[i][j] < 0)
                    c++;
                if (grid[i][j] > 0)
                    break;
            }
        }
        return c;
    }
};
// @lc code=end
