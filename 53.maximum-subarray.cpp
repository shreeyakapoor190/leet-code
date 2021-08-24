/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        // prefix sum method
        int largestSum = INT_MIN, l = nums.size(), i, j, sum = 0;
        int prefix[30001] = {0};
        prefix[0] = nums[0];
        for (i = 1; i < l; i++)
        {
            prefix[i] = prefix[i - 1] + nums[i];
        }

        for (i = 0; i < l; i++)
        {
            for (j = i; j < l; j++)
            {
                if (i > 0)
                    sum = prefix[j] - prefix[i - 1];
                else
                    sum = prefix[j];
                largestSum = max(largestSum, sum);
            }
        }
        return largestSum;
    }
};
// @lc code=end
