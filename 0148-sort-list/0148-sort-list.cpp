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

    ListNode* findMiddle(ListNode* head){

       ListNode* fast=head->next;
       ListNode* slow=head;

       while(fast && fast->next){

        slow=slow->next;
        fast=fast->next->next;

       }

       return slow;

    }

    ListNode* merge(ListNode* a,ListNode* b){

        ListNode* first=new ListNode(-1);
        ListNode* temp=first;

        while(a && b){

            if(a->val<=b->val){

                temp->next=a;
                temp=a;
                a=a->next;

            }else{

                temp->next=b;
                temp=b;
                b=b->next;

            }

        }

        if(!a) temp->next=b;
        else temp->next=a;

        return first->next;

    }

    ListNode* sortList(ListNode* head) {

        if(!head || !(head->next)) return head;

        ListNode* leftHead=head;
        ListNode* middle=findMiddle(head);
        ListNode* rightHead=middle->next;
        middle->next=nullptr;

        leftHead=sortList(leftHead);
        rightHead=sortList(rightHead);
        return merge(leftHead,rightHead);
        
    }
};