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
    ListNode* reverseBetween(ListNode* head, int l, int r) {

        if(!head || !(head->next)) return head;
        if(l==r) return head;

        ListNode* temp=head;
        ListNode* left=nullptr;
        ListNode* store;
        ListNode* newStartLeft=head;
        ListNode* newStart;
        ListNode* newEnd;
        int cnt=0;

        while(temp && cnt<=r+1){

            cnt++;
            if(cnt==l) store=temp;
            else if(cnt==r) newStart=temp;
            else if(cnt==(r+1)) newEnd=temp;
            else if(cnt==(l-1)) newStartLeft=temp;
            if(cnt>=l && cnt<=r){

                ListNode* right=temp->next;
                temp->next=left;
                left=temp;
                temp=right;
                continue;

            }


            left=temp;
            temp=temp->next;

        }

        if(l==1){

            store->next=newEnd;
            return newStart;

        }

        newStartLeft->next=newStart;
        store->next=newEnd;
        

        return head;
        
    }
};