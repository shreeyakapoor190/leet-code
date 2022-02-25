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
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
       int sum=0;
        ListNode* res= new ListNode(0);
        ListNode* result= res;
        head = head->next;
        while(head !=NULL)
        {
            if(head->val==0)
            {
                ListNode* temp= new ListNode(sum);
                res->next= temp;
                res= res->next;
                sum= 0;
            }
            sum+= head->val;
            head= head->next;
        }
        return result->next;
    }
};