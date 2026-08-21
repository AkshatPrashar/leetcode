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
    ListNode* deleteDuplicates(ListNode* head) {

        if(!head) return nullptr;
        ListNode* cnt=head;
        if(!(head->next)) return head;
        ListNode* temp=head->next;
        ListNode* left=head;

        while(temp){

            if(cnt->val==temp->val){

                if(temp->next==nullptr){

                    left->next=nullptr;
                    delete temp;
                    break;

                }
                else{

                    left->next=temp->next;
                    ListNode* cur=temp;
                    temp=temp->next;
                    cur->next=nullptr;
                    delete cur;
                    continue;

                }

            }
            else{

                cnt=temp;

            }

            left=temp;
            temp=temp->next;

        }

        return head;

        
    }
};