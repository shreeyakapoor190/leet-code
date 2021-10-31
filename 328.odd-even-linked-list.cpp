/*
 * @lc app=leetcode id=328 lang=cpp
 *
 * [328] Odd Even Linked List
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
    ListNode *oddEvenList(ListNode *head)
    {
        int index = 0;
        ListNode *curr = head;
        ListNode *l1 = new ListNode(0);
        ListNode *l2 = new ListNode(0);
        ListNode *h1 = l1, *h2 = l2;
        while (curr)
        {
            index++;
            if (index % 2 != 0)
            {
                ListNode *n = new ListNode(curr->val);
                l1->next = n;
                l1 = l1->next;
            }
            else
            {
                ListNode *n = new ListNode(curr->val);
                l2->next = n;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        l1->next = h2->next;
        return h1->next;
    }
};
// @lc code=end
