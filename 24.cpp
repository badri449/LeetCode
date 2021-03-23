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
        if(head==NULL)return head;
        ListNode* t = new ListNode();
        t->val =0;
        t->next = head;
        ListNode* parent = t;
        ListNode* current1 = head;
        ListNode* current2 = current1->next;
        while((current1) != NULL){
            current2 = current1->next;
            if(current2==NULL)return t->next;
            parent->next = current2;
            current1->next = current2->next;
            current2->next = current1;
            parent = current1;
            current1 = current1->next;
        }
        return t->next;
        
        
    }
};