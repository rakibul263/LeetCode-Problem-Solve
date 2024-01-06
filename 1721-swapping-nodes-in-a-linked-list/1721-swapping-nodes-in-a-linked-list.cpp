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
    int size_cal(ListNode *head)
    {
        int count=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        int size = size_cal(head);
        ListNode* fast = head, *slow = head;
        for(int i=0;i<k-1;i++)
        {
            fast = fast->next;
        }
        for(int j=0;j<size-k;j++)
        {
            slow = slow->next;
        }
        swap(fast->val,slow->val);
        return head;
    }
};