/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        while(head->next != NULL){
            if(head->next->val == 1000000)
                return true;
            head->val = 1000000;
            head = head->next;
        }
        
        return false;
    }
};