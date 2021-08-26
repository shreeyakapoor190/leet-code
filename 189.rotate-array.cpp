/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        vector<int> result;
        k = k % nums.size();
        int i, n = nums.size();
        for (i = n - k; i < n; i++)
        {
            result.push_back(nums[i]);
        }
        for (i = 0; i < (n - k); i++)
        {
            result.push_back(nums[i]);
        }
        // cout << "[";
        // for (i = 0; i < n - 1; i++)
        // {
        //     cout << result[i] << ",";
        // }
        // cout << result[n - 1] << "]";
        swap(nums, result);
        return;
    }
};
// @lc code=end
