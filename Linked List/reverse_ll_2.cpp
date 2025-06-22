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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        ListNode* temp = head;
        vector<int> arr;
        for (int i = 0; i < left - 1; i++) {
            temp = temp->next;
        }

        ListNode *curr=temp;
        for (int i = 0; i <= right - left; i++) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        for(int i=right-left;i>=0;i--)
        {
            curr->val=arr[i];
            curr=curr->next;
        }
        return head;
    }


};