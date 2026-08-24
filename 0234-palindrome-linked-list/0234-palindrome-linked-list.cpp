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

    ListNode* reverse(ListNode* head){

        ListNode* temp=head;
        ListNode* left=nullptr;

        while(temp){

            ListNode* right=temp->next;
            temp->next=left;
            left=temp;
            temp=right;

        }

        return left;


    }

    bool isPalindrome(ListNode* head) {

        if(!head || !head->next) return true;

        ListNode* fast=head;
        ListNode* slow=head;

        while(fast->next && fast->next->next){

            slow=slow->next;
            fast=fast->next->next;

        }

        ListNode* newHead=reverse(slow->next);

        slow=head;
        fast=newHead;

        while(fast){

            if(slow->val!=fast->val) return false;

            slow=slow->next;
            fast=fast->next;

        }

        return true;

        
    }
};