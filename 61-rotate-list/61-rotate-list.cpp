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
    ListNode* rotateRight(ListNode* head, int k) {
       if(!head || !head->next)
           return head;
        ListNode *curr= head;
        int size=0;
        while(curr)
        {
            curr= curr->next;
            size++; //finding size of linked list
        }
        k= k%size;
        if(k==0)
            return head;
        curr= head;
        int count=0;
        ListNode* second;
        while(count!= size-1)
        {
            if(count == size-k-1)  //storing the start of 2nd part of linked list from where we have to break.
                second= curr;   //4 5
        count++;
        curr= curr->next;
        }
        ListNode * temp= second->next; 
        second->next= NULL;
        curr->next = head;  //45123 (curr was 5 after the  end of while loop)
        head= temp;
        return head;
         // if(head==NULL||head->next==NULL){
//             return head;
//         }

//         ListNode* curr=head;
//         int c=0;
//         while(curr!=NULL){
//             curr=curr->next;
//             c++;
//         }
//         k=k%c;
//         if(k==0){
//             return head;
//         }
//         curr=head;
//         int count=c;
//         c=0;
//         ListNode* main;
//         while(c!=count-1){
//             if(c==count-k-1){
//                 main=curr;
//             }
//             c++;
//             curr=curr->next;
            
//         }
//         ListNode * temp=main->next;
//         main->next=NULL;
//         curr->next=head;
//         head=temp;
//         return head;
    }
};