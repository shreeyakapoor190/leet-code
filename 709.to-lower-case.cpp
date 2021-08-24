/*
 * @lc app=leetcode id=709 lang=cpp
 *
 * [709] To Lower Case
 */

// @lc code=start
class Solution
{
public:
    string toLowerCase(string s)
    {
        int i, num;
        for (i = 0; i < s.size(); i++)
        {
            num = (int)s[i];
            if (64 < num && num < 91)
                num += 32;
            s[i] = (char)num;
        }

        return s;
    }
};
// @lc code=end
