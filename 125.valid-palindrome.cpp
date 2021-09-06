/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
#include <string>
class Solution
{
public:
    bool isPalindrome(string s)
    {
        int l = s.size(), i, c;
        string n;
        for (i = 0; i < l; i++)
        {
            if ((int(s[i]) >= 97 && int(s[i]) <= 122) || (int(s[i]) >= 48 && int(s[i]) <= 57))
            {
                n = n + s[i];
            }
            else if ((int(s[i]) >= 65 && int(s[i]) <= 90))
            {
                c = int(s[i]) + 32;
                n = n + char(c);
            }
        }
        string r = n;
        reverse(r.begin(), r.end());
        if (n == r)
            return true;
        else
            return false;
    }
};
// @lc code=end
