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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* temp=head;
        ListNode* slow=head;

        for(int i=1;i<=n;i++) temp=temp->next;

        if(!temp){

            ListNode* cur=head;
            head=head->next;
            cur->next=nullptr;
            delete cur;
            return head;

        }

        while(temp->next){

            slow=slow->next;
            temp=temp->next;

        }

        ListNode* dnode=slow->next;
        slow->next=dnode->next;
        delete dnode;
        return head;

    }
};