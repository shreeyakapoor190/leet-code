/*
 * @lc app=leetcode id=832 lang=cpp
 *
 * [832] Flipping an Image
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
    {
        int l = image.size(), i, len, j;
        vector<int> hor;
        vector<int> ver;
        vector<vector<int>> img;
        vector<vector<int>> img2;
        for (i = 0; i < l; i++)
        {
            len = image[i].size();
            for (j = len - 1; j >= 0; j--)
            {
                hor.push_back(image[i][j]);
            }
            img.push_back(hor);
            hor.clear();
        }
        for (i = 0; i < l; i++)
        {
            len = img[i].size();
            for (j = 0; j < len; j++)
            {
                if (img[i][j] == 0)
                    ver.push_back(1);
                if (img[i][j] == 1)
                    ver.push_back(0);
            }
            img2.push_back(ver);
            ver.clear();
        }
        return img2;
    }
};
// @lc code=end
