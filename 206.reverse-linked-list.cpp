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
        vector<int> res;
        ListNode *curr = head;
        ListNode *temp;
        while (curr != NULL)
        {
            res.insert(res.begin(), curr->val);
            temp = curr;
            curr = curr->next;
        }
        head->val = temp->val;
        head = &res;
        return head;
    }
};
// @lc code=end
