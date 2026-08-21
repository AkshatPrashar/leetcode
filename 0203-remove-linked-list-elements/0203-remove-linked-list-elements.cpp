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
    ListNode* removeElements(ListNode* head, int v) {
        while(head && head->val==v){

            ListNode* temp=head;
            head=head->next;
            temp->next=nullptr;
            delete temp;

        }

        ListNode* temp=head;
        ListNode* left=nullptr;
        

        while(temp){

            if(temp->next==nullptr && (temp->val==v)){

                left->next=nullptr;
                delete temp;
                break;

            }
            else if(temp->val==v){

                left->next=temp->next;
                ListNode* cur=temp;
                temp=temp->next;
                cur->next=nullptr;
                delete cur;
                continue;

            }


            left=temp;
            temp=temp->next;

        }

        return head;

    }
};