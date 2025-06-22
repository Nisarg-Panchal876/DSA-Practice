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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *temp=head;
        if(head==NULL) return head;

        int length=1;
        while(temp && temp->next)
        {
            temp=temp->next;
            length++;
        }

        ListNode *beg=head;
        ListNode *end=head;

        for(int i=0;i<k-1;i++)
        {
            beg=beg->next;
        }
        for(int i=0;i<length-k;i++)
        {
            end=end->next;
        }

        int a=end->val;
        end->val=beg->val;
        beg->val=a;
        
        return head;
    }
};