/*
 * @lc app=leetcode id=1979 lang=cpp
 *
 * [1979] Find Greatest Common Divisor of Array
 */

// @lc code=start
class Solution
{
public:
    int findGCD(vector<int> &nums)
    {
        int l = nums.size(), n1, n2;
        sort(nums.begin(), nums.end());
        n1 = nums[0];
        n2 = nums[l - 1];
        return __gcd(n1, n2);
    }
};
// @lc code=end
