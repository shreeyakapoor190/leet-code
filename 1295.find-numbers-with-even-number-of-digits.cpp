/*
 * @lc app=leetcode id=1295 lang=cpp
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
class Solution
{
public:
    int findNumbers(vector<int> &nums)
    {
        int i, c, d = 0;
        for (i = 0; i < nums.size(); i++)
        {
            c = 0;
            while (nums[i] > 0)
            {
                c++;
                nums[i] /= 10;
            }
            if (c % 2 == 0)
                d++;
        }
        return d;
    }
};
// @lc code=end
