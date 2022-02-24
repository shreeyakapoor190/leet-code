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
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        while(head!=NULL)
        {
            arr.push_back(head->val);
            head= head->next;
        }
        ListNode* result= new ListNode(0);
        ListNode* res= result;
        sort(arr.begin(),arr.end());
        for(int i:arr)
        {
            ListNode* temp= new ListNode(i);
            result->next= temp;
            result= result->next;
        }
        return res->next;
    }
};