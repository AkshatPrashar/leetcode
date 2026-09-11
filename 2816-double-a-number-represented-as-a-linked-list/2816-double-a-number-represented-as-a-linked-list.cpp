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

    int fn(ListNode* head){

        if(!head) return 0;

        int carry=fn(head->next);

        int data=2*(head->val)+carry;
        head->val=data%10;
        carry=data/10;
        return carry;

    }

    ListNode* doubleIt(ListNode* head) {
        
        int carry=fn(head);
        if(carry){

            ListNode* start=new ListNode(1);
            start->next=head;
            head=start;

        }

        return head;

    }
};