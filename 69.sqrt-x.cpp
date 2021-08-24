/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        unsigned int i;
        int res = 0;
        if (x == 1)
            return 1;
        if (x == 0)
            return 0;
        for (i = 1; i <= x / 2; i++)
        {
            if ((i * i) <= x)
                res = i;
            else
                break;
        }
        return res;
    }
};
// @lc code=end
