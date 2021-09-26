/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *curr = head;
        long l = 0;
        while (curr != NULL)
        {
            l++;
            curr = curr->next;
        }
        long mid;
        mid = l / 2;
        int j;
        for (j = 0; j < mid; j++)
        {
            head = head->next;
        }
        return head;
    }
};
// @lc code=end
