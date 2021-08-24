/*
 * @lc app=leetcode id=1550 lang=cpp
 *
 * [1550] Three Consecutive Odds
 */

// @lc code=start
class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        int i, c = 0;
        for (i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 != 0)
                c++;
            else
                c = 0;
            if (c > 2)
                return true;
        }
        return false;
    }
};
// @lc code=end
