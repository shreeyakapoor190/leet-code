/*
 * @lc app=leetcode id=1528 lang=cpp
 *
 * [1528] Shuffle String
 */

// @lc code=start
class Solution
{
public:
    string restoreString(string s, vector<int> &indices)
    {
        int i, l = indices.size();
        char temp[100];
        // temp = s;
        for (i = 0; i < l; i++)
        {
            for (int j = 0; j < l; j++)
            {
                if (indices[j] == i)
                {
                    temp[i] = s[j];
                    // s[j] = temp;
                }
            }
        }
        return temp;
    }
};
// @lc code=end
