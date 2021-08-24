/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        int i, sum = 0;
        for (i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            nums[i] = sum;
        }
        return nums;
    }
};
// @lc code=end
