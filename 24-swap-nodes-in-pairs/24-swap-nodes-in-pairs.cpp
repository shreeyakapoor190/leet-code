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
    ListNode* swapPairs(ListNode* head) {
       ListNode* res=new ListNode(0);
        ListNode *r=new ListNode();
        r=res;
        if(head==NULL)
            return r->next;
        if(head->next==NULL)
            return head;
        while(head !=NULL)
        {
            ListNode* temp= new ListNode(head->val);
            if(head->next!=NULL)
            {
                ListNode *temp2=new ListNode(head->next->val);
                res->next=temp2;
                res->next->next=temp;
                head= head->next->next;
                res= res->next->next;
            }
            else
            {
                res->next=temp;
                head=head->next;
                res=res->next;
            }
        }
        return r->next;
    }
};