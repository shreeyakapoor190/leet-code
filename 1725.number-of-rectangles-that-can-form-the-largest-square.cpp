/*
 * @lc app=leetcode id=1725 lang=cpp
 *
 * [1725] Number Of Rectangles That Can Form The Largest Square
 */

// @lc code=start
class Solution
{
public:
    int countGoodRectangles(vector<vector<int>> &rectangles)
    {
        int l = rectangles.size(), i, sq, maxi = 0, c = 0;
        for (i = 0; i < l; i++)
        {
            sq = min(rectangles[i][0], rectangles[i][1]);
            maxi = max(maxi, sq);
        }
        for (i = 0; i < l; i++)
        {
            sq = min(rectangles[i][0], rectangles[i][1]);
            if (sq == maxi)
                c++;
        }
        return c;
    }
};
// @lc code=end
