/*
 * @lc app=leetcode id=1721 lang=cpp
 *
 * [1721] Swapping Nodes in a Linked List
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
    ListNode *swapNodes(ListNode *head, int k)
    {
        int i, l = 0, temp, temp2;
        ListNode *curr = head;
        while (curr)
        {
            l++;
            if (l == k)
                temp = curr->val;
            curr = curr->next;
        }
        curr = head;
        int index = 0;
        while (curr)
        {
            index++;
            if (l - k + 1 == index)
            {
                temp2 = curr->val;
                curr->val = temp;
            }
            curr = curr->next;
        }
        curr = head;
        l = 0;
        while (curr)
        {
            l++;
            if (l == k)
                curr->val = temp2;
            curr = curr->next;
        }
        return head;
    }
};
// @lc code=end
