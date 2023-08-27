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
        // empty or 1 item list
        if (!head || !head->next) return head;

        ListNode* prev = NULL; // pointer for first node after reversing
        ListNode* curr = head; // first node

        while (curr) {
            // save next item to temp
            ListNode* temp = curr->next;
            // set next of current to previous
            curr->next = prev;
            // move prev to point to current
            prev = curr;
            // move to the next node
            curr = temp;
        }
        return prev;
    }
};