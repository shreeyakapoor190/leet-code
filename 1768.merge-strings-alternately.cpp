/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */

// @lc code=start
class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        string res;
        int len1 = word1.size(), len2 = word2.size(), i, c = 0;
        if (len1 == len2)
        {
            for (i = 0; i < len1; i++)
            {
                res[c] = word1[i];
                c++;
                res[c] = word2[i];
                c++;
            }
        }
        else if (len1 > len2)
        {
            for (i = len2; i < len1; i++)
            {
                res[c] = word1[i];
                c++;
            }
        }
        else
        {
            for (i = len1; i < len2; i++)
            {
                res[c] = word2[i];
                c++;
            }
        }
        return res;
    }
}

;
// @lc code=end
