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
    ListNode* oddEvenList(ListNode* head) {

        if(!head || !(head->next)) return head;

        ListNode* startOdd=head;
        ListNode* startEven=head->next;
        ListNode* temp=startOdd;
        ListNode* jam=startEven;

        while(temp && jam){

            temp->next=jam->next;
            if(temp->next) temp=jam->next;
            else break;
            jam->next=temp->next;
            jam=temp->next;

        }

        temp->next=startEven;

        return startOdd;
        
    }
};