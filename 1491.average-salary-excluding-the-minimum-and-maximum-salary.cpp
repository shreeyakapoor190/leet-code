/*
 * @lc app=leetcode id=1491 lang=cpp
 *
 * [1491] Average Salary Excluding the Minimum and Maximum Salary
 */

// @lc code=start
class Solution
{
public:
    double average(vector<int> &salary)
    {
        int i, j, n = salary.size();
        double sum = 0.0, avg = 0.0;
        sort(salary.begin(), salary.end());
        for (i = 1; i < n - 1; i++)
        {
            sum += salary[i];
        }
        avg = sum / (n - 2);
        return avg;
    }
};
// @lc code=end
