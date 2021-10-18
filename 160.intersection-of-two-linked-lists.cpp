/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *l1 = headA;
        ListNode *l2 = headB;
        if (!l1)
            return NULL;
        if (!l2)
            return NULL;
        while (l1)
        {
            while (l2)
            {
                if (l1 == l2)
                    return (l1);
                else
                    l2 = l2->next;
            }
            l1 = l1->next;
            l2 = headB;
        }
        return (NULL);
    }
};
// @lc code=end
