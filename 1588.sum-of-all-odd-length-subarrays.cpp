/*
 * @lc app=leetcode id=1588 lang=cpp
 *
 * [1588] Sum of All Odd Length Subarrays
 */

// @lc code=start
class Solution
{
public:
    int sumOddLengthSubarrays(vector<int> &arr)
    {
        int subArraySum = 0, i, j, l = arr.size(), k;
        for (i = 0; i < l; i++)
        {
            for (j = i; j < l; j += 2)
            {
                for (k = i; k <= j; k++)
                    subArraySum += arr[k];
            }
        }
        return subArraySum;
    }
};
// @lc code=end
