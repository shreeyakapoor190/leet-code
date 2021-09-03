/*
 * @lc app=leetcode id=1637 lang=cpp
 *
 * [1637] Widest Vertical Area Between Two Points Containing No Points
 */

// @lc code=start
class Solution
{
public:
    int maxWidthOfVerticalArea(vector<vector<int>> &points)
    {
        int i, len = points.size(), j;
        sort(points.begin(), points.end());
        int diff = points[1][0] - points[0][0];
        for (i = 1; i < len - 1; i++)
        {
            diff = max((points[i + 1][0] - points[i][0]), diff);
        }
        return diff;
    }
};
// @lc code=end
