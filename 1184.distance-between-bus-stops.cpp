/*
 * @lc app=leetcode id=1184 lang=cpp
 *
 * [1184] Distance Between Bus Stops
 */

// @lc code=start
class Solution
{
public:
    int distanceBetweenBusStops(vector<int> &distance, int start, int destination)
    {
        int n = distance.size(), i, dist1 = 0, dist2 = 0, dist;
        if (start > destination)
        {
            swap(start, destination);
        }
        for (i = 0; i < n; i++)
        {
            if (i >= start && i < destination)
                dist1 += distance[i];
            dist2 += distance[i];
        }
        dist2 -= dist1;
        dist = min(dist1, dist2);
        return dist;
    }
};
// @lc code=end
