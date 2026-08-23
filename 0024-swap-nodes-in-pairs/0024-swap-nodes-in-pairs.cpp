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
    ListNode* swapPairs(ListNode* head) {

        if(!head) return nullptr;
        if(!(head->next)) return head;

        ListNode* firstFront=head->next;
        ListNode* firstBack=head;
        ListNode* secFront=head;
        ListNode* secBack=head;
        ListNode* nh=firstFront;

        while(firstFront){

            if(firstFront) secBack=firstFront->next;
            else secBack=nullptr;
            if(secBack) secFront=secBack->next;
            else secFront=nullptr;

            firstFront->next=firstBack;
            firstBack->next=nullptr;
            if(!secBack) break;
            else if(!secFront){

                firstBack->next=secBack;
                break;

            }
            ListNode* temp=secFront->next;
            secFront->next=secBack;
            secBack->next=nullptr;
            firstBack->next=secFront;

            firstBack=temp;
            if(firstBack) firstFront=firstBack->next;
            else break;
            if(firstFront) secBack->next=firstFront;
            else secBack->next=temp;

        }

        return nh;
        


        
    }
};