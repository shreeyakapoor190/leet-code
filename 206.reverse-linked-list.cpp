/*
 * @lc app=leetcode id=206 lang=cpp
 *
 * [206] Reverse Linked List
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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *curr = head;
        stack<int> s;
        while (curr != NULL)
        {
            s.push(curr->val);
            curr = curr->next;
        }
        curr = head;
        while (curr != NULL)
        {
            int i = s.top();
            s.pop();
            curr->val = i;
            curr = curr->next;
        }
        return head;
    }
};
// @lc code=end
