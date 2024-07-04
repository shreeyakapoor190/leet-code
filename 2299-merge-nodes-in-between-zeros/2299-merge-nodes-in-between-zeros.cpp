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
         ListNode* temp= head;
         ListNode* res=new ListNode(-1);
         ListNode* result =res;
         ListNode* r;
        while(temp!= NULL)
        {
            if(temp->val != 0)
            {
                sum += temp->val;
            }
            else if (temp->val==0 && sum!=0){
                r =new ListNode(sum);
                res->next= r ;
                sum=0;
                res= res->next;
            }
            temp= temp->next;
        }
        return result->next;
    }
};