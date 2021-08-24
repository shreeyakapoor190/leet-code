/*
 * @lc app=leetcode id=1534 lang=cpp
 *
 * [1534] Count Good Triplets
 */

// @lc code=start

class Solution
{
public:
    int countGoodTriplets(vector<int> &arr, int a, int b, int c)
    {
        int i, j, k, count = 0;
        int len = arr.size();
        for (i = 0; i < len; i++)
        {
            for (j = i + 1; j < len; j++)
            {
                for (k = j + 1; k < len; k++)
                {
                    if (abs((arr[i] - arr[j])) <= a && abs((arr[j] - arr[k])) <= b && abs((arr[i] - arr[k])) <= c)
                        count++;
                }
            }
        }
        return count;
    }
};
// @lc code=end
