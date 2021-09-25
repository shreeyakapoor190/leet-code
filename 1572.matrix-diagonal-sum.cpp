/*
 * @lc app=leetcode id=1572 lang=cpp
 *
 * [1572] Matrix Diagonal Sum
 */

// @lc code=start
class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int l = mat.size(), i, j, sum = 0;

        for (i = 0; i < l; i++)
        {
            for (j = 0; j < l; j++)
            {
                if (i == j || ((i + j) == (l - 1)))
                {
                    sum += mat[i][j];
                }
            }
        }
        return sum;
    }
};
// @lc code=end
