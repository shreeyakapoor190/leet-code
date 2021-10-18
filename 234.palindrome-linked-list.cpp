/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
    bool isPalindrome(ListNode *head)
    {
        ListNode *curr = head;
        vector<int> v1, v2;
        while (curr)
        {
            v1.push_back(curr->val);
            curr = curr->next;
        }
        v2 = v1;
        reverse(v1.begin(), v1.end());
        if (v1 == v2)
            return true;
        else
            return false;
    }
};
// @lc code=end
