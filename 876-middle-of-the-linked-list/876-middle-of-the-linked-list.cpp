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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        int counter = 0;
        while(temp)
        {
           counter++;
           temp = temp->next;
        }
        int middle = counter / 2;
        temp = head; 
        while(temp && middle --)
        {
            temp = temp->next;
        }
        return temp;
    }
};