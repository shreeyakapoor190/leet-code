/*
 * @lc app=leetcode id=1669 lang=cpp
 *
 * [1669] Merge In Between Linked Lists
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
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *l1 = list1, *l2 = list2, *l;
        int len = 0;
        while (l1)
        {
            len++;
            if (len == a)
            {
                l = l1->next;
                l1->next = l2;
                break;
            }
            l1 = l1->next;
        }
        // travesring to the end of l1
        while (l1->next)
            l1 = l1->next;
        // adding the end of list1 to l1
        while (l)
        {
            len++;
            if (len == b + 2)
            {
                l1->next = l;
                break;
            }
            l = l->next;
        }
        return list1;
    }
};
// @lc code=end
