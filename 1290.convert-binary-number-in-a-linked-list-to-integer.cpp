/*
 * @lc app=leetcode id=1290 lang=cpp
 *
 * [1290] Convert Binary Number in a Linked List to Integer
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
    int getDecimalValue(ListNode *head)
    {
        int l = 0, num = 0, i;
        ListNode *curr = head;
        while (curr != NULL)
        {
            l++;
            curr = curr->next;
        }
        i = l - 1;
        while (i >= 0)
        {
            num += head->val * pow(2, i);
            head = head->next;
            i--;
        }
        return num;
    }
};
// @lc code=end
