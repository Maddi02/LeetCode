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
    ListNode* reverseList(ListNode* head) {
        struct ListNode *first;
        vector<int> v;
        first = head;
        while(head){
            v.push_back(head->val);
            head = head-> next;
        }
        head = first;
        int n = v.size()-1;
        for(int j = n; j>=0 ; j--){
            head->val = v[j];
            head = head->next;
        }
        return first;
    }
};