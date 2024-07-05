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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp2= temp1->next;
        ListNode* temp3= temp1->next->next;
        vector<int> res, criticalPoints;
        int index=2;
        while(temp1->next != NULL && temp2->next!=NULL && temp3 != NULL){
            if((temp1->val > temp2->val && temp3->val > temp2->val) ||(temp1->val < temp2->val && temp3->val < temp2->val)){
                criticalPoints.push_back(index);
            }
            temp1= temp1->next;
            temp2= temp2->next;
            temp3= temp3->next;
            index++;
        }
        if(criticalPoints.size() < 2){
           res.push_back(-1);
            res.push_back(-1);
        }
        else{
            int max, minimum=100000000;
            max = criticalPoints[criticalPoints.size()-1] - criticalPoints[0] ;
            for(int i=0; i<criticalPoints.size()-1; i++){
                minimum= min(minimum, criticalPoints[i+1]- criticalPoints[i]);
            }
            // min = criticalPoints[criticalPoints.size()-1] - criticalPoints[0];
            res.push_back(minimum);
            res.push_back(max);
        }

return res;
    }
};