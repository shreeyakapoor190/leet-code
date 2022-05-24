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
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) {
       ListNode* g=new ListNode(0);
            ListNode* s=g;
           int carry=0;
            while(first||second){
                int sum=0;
                if(first){
                    sum=sum+first->val;
                }
                if(second){
                    sum=sum+second->val;
                }
                sum=sum+carry;
                g->next=new ListNode(sum%10);
                g=g->next;
                carry=sum/10;
                if(first){
                    first=first->next;
                }
                if(second){
                    second=second->next;
                }
            }
        if(carry==1){
            g->next=new ListNode(1);
        }
        
        return s->next;
    }
    
};