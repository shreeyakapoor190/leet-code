/*
 * @lc app=leetcode id=374 lang=cpp
 *
 * [374] Guess Number Higher or Lower
 */

// @lc code=start
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        long int s = 0, e = n, mid;
        int res;
        while (s <= e)
        {
            mid = (s + e) / 2;
            res = guess(mid);
            if (res == 0)
                return mid;
            else if (res == 1)
                s = mid + 1;
            else if (res == -1)
                e = mid - 1;
        }
        return 0;
    }
};
// @lc code=end
