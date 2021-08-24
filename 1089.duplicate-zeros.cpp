/*
 * @lc app=leetcode id=1089 lang=cpp
 *
 * [1089] Duplicate Zeros
 */

// @lc code=start
class Solution
{
public:
    void duplicateZeros(vector<int> &arr)
    {
        int i, j, len = arr.size();
        for (i = 0; i < len; i++)
        {
            if (arr[i] == 0)
            {
                for (j = i; j < len; j++)
                {
                    arr[j + 1] = arr[j];
                }
            }
        }
        return;
    }
};
// @lc code=end
