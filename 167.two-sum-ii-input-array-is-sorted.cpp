/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int sum = 0, l = numbers.size(), i = 0, j = l - 1;
        vector<int> result;
        while (i <= j)
        {
            sum = numbers[i] + numbers[j];
            if (sum == target)
            {
                result.push_back(i + 1);
                result.push_back(j + 1);
                break;
            }
            else if (sum > target)
                j--;
            else if (sum < target)
                i++;
        }
        return result;
    }
};
// @lc code=end
