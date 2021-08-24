/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int i, len = s.size();
        for (i = len - 1; i >= 0; i--)
        {
            s.push_back(s[i]);
        }
        s.erase(s.begin(), s.begin() + len);
        for (i = 0; i < len; i++)
        {
            cout << s[i];
        }
    }
};
// @lc code=end
