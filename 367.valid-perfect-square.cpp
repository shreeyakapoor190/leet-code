/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        long long int i;
        if (num == 0)
            return 0;
        if (num == 1)
            return 1;
        for (i = 1; i <= num / 2; i++)
        {
            if ((i * i) == num)
                return true;
        }
        return false;
    }
};
// @lc code=end
