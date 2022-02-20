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
    ListNode* rev(ListNode* head, int k)
    {
        ListNode* curr= head;
        ListNode* prev= NULL;
        ListNode* node;
        int c= 0;
        while(curr!=NULL and c<k)
        {
            node= curr->next;
            curr->next= prev;
            prev= curr;
            curr= node;
            c++;
        }
        if(node!=NULL)
        {
            head->next= rev(node,k);
        }
        return prev;
    }
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
            return NULL;
        return rev(head,2);
    }
};