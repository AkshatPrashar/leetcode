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

    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* startNode=head;
        ListNode* temp=head;
        ListNode* nextgroup=nullptr;
        int cnt=0;

        while(temp){

            cnt++;
            if(cnt==k){

                nextgroup=temp->next;
                temp->next=nullptr;
                break;

            }
            temp=temp->next;

        }

        head=reverse(startNode);

        temp=nextgroup;
        ListNode* currentStart;
        cnt=0;

        while(temp){

            cnt++;
            if(cnt==k){

                currentStart=nextgroup;
                nextgroup=temp->next;
                temp->next=nullptr;
                reverse(currentStart);
                startNode->next=temp;
                startNode=currentStart;
                temp=nextgroup;
                cnt=1;

            }
            if(temp) temp=temp->next;
            else break;

        }

        startNode->next=nextgroup;

        return head;

    }
};