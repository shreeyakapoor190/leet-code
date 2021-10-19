/*
 * @lc app=leetcode id=203 lang=cpp
 *
 * [203] Remove Linked List Elements
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
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *curr = head;
        ListNode *res = new ListNode(0);
        ListNode *s = res;
        while (curr)
        {
            if (curr->val != val)
            {
                res->next = new ListNode(curr->val);
                res = res->next;
            }

            curr = curr->next;
        }
        return s->next;
    }
};
// @lc code=end
