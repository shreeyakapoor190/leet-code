/*
 * @lc app=leetcode id=1913 lang=cpp
 *
 * [1913] Maximum Product Difference Between Two Pairs
 */

// @lc code=start
class Solution
{
public:
    int maxProductDifference(vector<int> &nums)
    {
        int l = nums.size(), pdt;
        sort(nums.begin(), nums.end());
        pdt = (nums[l - 1] * nums[l - 2]) - (nums[0] * nums[1]);
        return pdt;
    }
};
// @lc code=end
