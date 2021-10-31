/*
 * @lc app=leetcode id=1019 lang=cpp
 *
 * [1019] Next Greater Node In Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    vector<int> nextLargerNodes(ListNode *head)
    {
        int i, flag = 0;
        vector<int> res;
        ListNode *curr = head;
        ListNode *curr1 = head->next;
        while (curr)
        {
            flag = 0;
            curr1 = curr->next;
            while (curr1)
            {
                if (curr1->val > curr->val)
                {
                    flag = 1;
                    res.push_back(curr1->val);
                    break;
                }

                curr1 = curr1->next;
            }
            if (flag != 1)
            {
                res.push_back(0);
            }
            curr = curr->next;
        }

        return res;
    }
};
// @lc code=end
