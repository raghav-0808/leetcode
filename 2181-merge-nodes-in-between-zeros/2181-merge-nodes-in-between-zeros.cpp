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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* first = head->next;
        ListNode* second = head->next;
        while (first != nullptr) {
            int sum = 0;
            while (first->val != 0) {
                sum += first->val;
                first = first->next;
            }
            second->val = sum;
            first = first->next;
            second->next = first;
            second = second->next;
        }
        return head->next;
    }
};