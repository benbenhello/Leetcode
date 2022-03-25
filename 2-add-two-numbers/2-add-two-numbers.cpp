/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
using namespace std;
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int num1 = 0,num2 = 0,carry = 0,sum;
        ListNode* ans = NULL;
        ListNode* l =NULL;
        while(l1!=NULL | l2!=NULL){
            if(l1 == NULL){
                num1 = 0;
            }else{
                num1 = l1->val;
                l1 = l1->next;
            }
            if(l2 == NULL){
                num2 = 0;
            }else{
                num2 = l2->val;
                l2 = l2->next;
            }
            sum = num1+num2+carry;
            carry = sum/10;
            //cout<<(sum%10);
            if(l == NULL){
                l = new ListNode(sum%10);
                ans = l;
            }else{
                l->next = new ListNode(sum%10);
                l = l->next;
            }
        }
        if(carry != 0){
            l->next = new ListNode(carry);
        }
        return ans;
    }
};