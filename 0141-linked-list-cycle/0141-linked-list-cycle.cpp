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
    bool hasCycle(ListNode *head) {

        int reached=INT_MIN;
        ListNode* temp=head;

        while(temp){

            temp->val=reached;
            if((temp->next) && (temp->next->val==reached)) return true;
            temp=temp->next;

        }

        return false;
        
    }
};