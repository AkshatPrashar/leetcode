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
    ListNode* deleteMiddle(ListNode* head) {
        
        if(!head || !(head->next)) return nullptr;

        ListNode* temp=head;
        ListNode* slow=head;
        ListNode* left=nullptr;

        while(temp->next && temp->next->next){

            left=slow;
            slow=slow->next;
            temp=temp->next->next;

        }

        if(!(temp->next)){

            ListNode* cur=left->next;
            left->next=cur->next;
            cur->next=nullptr;
            delete cur;
            return head;


        }

        ListNode* cur=slow->next;
        slow->next=cur->next;
        cur->next=nullptr;
        delete cur;
        return head;

    }
};