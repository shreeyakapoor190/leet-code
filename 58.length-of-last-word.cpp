/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int l = s.size(), count = 0, i;
        for (i = l - 1; i >= 0; i--)
        {
            if ((int(s[i]) >= 65 && int(s[i]) <= 90) || (int(s[i]) >= 97 && int(s[i]) <= 122))
                count++;
            if (count > 0 && int(s[i]) == 32)
                break;
        }
        return count;
    }
};
// @lc code=end
