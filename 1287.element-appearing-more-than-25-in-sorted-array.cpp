/*
 * @lc app=leetcode id=1287 lang=cpp
 *
 * [1287] Element Appearing More Than 25% In Sorted Array
 */

// @lc code=start
class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        int i, len, d, c, req;
        len = arr.size();

        for (i = 0; i < len; i++)
        {
            c = 0;
            for (int j = i; j < len; j++)
            {
                if (arr[i] == arr[j])
                    c++;
                if (c >= (len / 4))
                    d = arr[i];
            }
        }
        return d;
    }
};
// @lc code=end
