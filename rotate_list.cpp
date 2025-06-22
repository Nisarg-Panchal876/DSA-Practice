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
    ListNode* rotateRight(ListNode* head, int k) {

        ListNode* tail = head;
        int length = 1;
        if (tail == NULL)
            return head;

        while (tail->next != NULL) {
            tail = tail->next;
            length++;
        }
        tail->next = head;

        k = k % length;

        if (k == 0) {
            tail->next = NULL;
            return head;
        }
        int steps = length - k - 1;
        ListNode* temp = head;

        while (steps--) {
            temp = temp->next;
            
        }

        head = temp->next;
        temp->next = NULL;

        return head;
    }
};