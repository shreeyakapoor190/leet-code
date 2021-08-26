/*
 * @lc app=leetcode id=1502 lang=cpp
 *
 * [1502] Can Make Arithmetic Progression From Sequence
 */

// @lc code=start
class Solution
{
public:
    bool canMakeArithmeticProgression(vector<int> &arr)
    {
        int i, j, n = arr.size(), swap;
        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = swap;
                }
            }
        }
        int diff = arr[1] - arr[0];
        for (i = 1; i < n - 1; i++)
        {
            if ((arr[i + 1] - arr[i]) != diff)
                return false;
        }
        return true;
    }
};
// @lc code=end
