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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = new ListNode();
        temp->val = 0;
        temp->next = head;
        ListNode* front = temp;
        ListNode* back = temp;
        int d = 0;
        for(int i=0;i<=n;i++){
            front = front->next;
        }
        while((front) != NULL){
            front = front->next;
            back = back->next;
        }
        back->next = back->next->next;
        return temp->next;
    }
};