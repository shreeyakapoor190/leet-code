/*
 * @lc app=leetcode id=896 lang=cpp
 *
 * [896] Monotonic Array
 */

// @lc code=start
class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        int i, j, c = 0;
        for (i = 0; i < nums.size(); i++)
        {
            if (nums[i] < nums[i + 1])
            {
                for (j = i + 2; j < nums.size(); j++)
                {
                    if (nums[i] <= nums[j])
                        c = 1;
                    else
                        return false;
                }
            }
            else
            {
                for (j = i + 2; j < nums.size(); j++)
                {
                    if (nums[i] >= nums[j])
                        c = 1;
                    else
                        return false;
                }
            }
        }

        return true;
    }
};
// @lc code=end
