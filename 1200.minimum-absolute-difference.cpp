/*
 * @lc app=leetcode id=1200 lang=cpp
 *
 * [1200] Minimum Absolute Difference
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> minimumAbsDifference(vector<int> &arr)
    {
        int len = arr.size(), i, j, mDif;
        vector<int> pair;
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        mDif = arr[1] - arr[0];
        for (i = 0; i < len - 1; i++)
        {
            j = i + 1;
            mDif = min(mDif, (arr[j] - arr[i]));
        }
        for (i = 0; i < len - 1; i++)
        {
            j = i + 1;
            if (arr[j] - arr[i] == mDif)
            {
                pair.push_back(arr[i]);
                pair.push_back(arr[j]);
            }
            if (pair.empty() != true)
                res.push_back(pair);
            pair.clear();
        }
        return res;
    }
};
// @lc code=end
