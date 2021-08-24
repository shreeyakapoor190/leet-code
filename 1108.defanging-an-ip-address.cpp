/*
 * @lc app=leetcode id=1108 lang=cpp
 *
 * [1108] Defanging an IP Address
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    string defangIPaddr(string address)
    {
        int i;
        for (i = 0; i < address.size(); i++)
        {
            if (address[i] == '.')
            {
                address.replace(i, 1, "[.]");
                i += 2;
            }
        }
        return address;
    }
};
// @lc code=end
