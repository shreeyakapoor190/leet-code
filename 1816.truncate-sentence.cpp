/*
 * @lc app=leetcode id=1816 lang=cpp
 *
 * [1816] Truncate Sentence
 */

// @lc code=start
class Solution
{
public:
    string truncateSentence(string s, int k)
    {
        int l = size(s), i, c = 0;
        string res;
        for (i = 0; i < l; i++)
        {
            if (s[i] == ' ')
                c++;
            if (c < k)
                res += s[i];
            if (c == k)
                return res;
        }
        return res;
    }
};
// @lc code=end
