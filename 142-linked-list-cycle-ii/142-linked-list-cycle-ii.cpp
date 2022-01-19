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
    ListNode *detectCycle(ListNode *head) {
         if(head==nullptr) return nullptr;
        ListNode *slow=head, *fast=head;
        while(fast !=nullptr && fast->next != nullptr){
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    fast=fast->next;
                    slow=slow->next;
                }
                return fast;
            }
        }
        return nullptr;
    }
};