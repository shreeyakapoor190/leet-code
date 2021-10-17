/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *curr1 = l1;
        ListNode *curr2 = l2;
        ListNode *f = new ListNode(5);
        ListNode *g = f;
        while (curr1 && curr2)
        {

            if (curr1->val <= curr2->val)
            {
                f->next = new ListNode(curr1->val);
                f = f->next;
                curr1 = curr1->next;
            }
            else
            {
                f->next = new ListNode(curr2->val);
                f = f->next;
                curr2 = curr2->next;
            }
        }
        if (curr1)
        {
            f->next = curr1;
        }
        else if (curr2)
        {
            f->next = curr2;
        }
        return g->next;
    }
};
// @lc code=end
