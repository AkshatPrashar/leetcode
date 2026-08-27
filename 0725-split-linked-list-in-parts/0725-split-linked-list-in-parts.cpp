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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        
        vector<ListNode*> arr;

        int cnt=0;
        ListNode* temp=head;

        while(temp){

            cnt++;
            temp=temp->next;

        }

        if(k>cnt){

            temp=head;
            while(temp){

                if(cnt<=0){

                    arr.push_back(NULL);

                }else{

                    ListNode* right=temp->next;
                    temp->next=NULL;
                    arr.push_back(temp);
                    temp=right;
                    k--;
                    continue;

                }

                k--;
                temp=temp->next;

            }

            for(int i=1;i<=k;i++) arr.push_back(NULL);

            return arr;

        }

        int ElementsInGroup=cnt/k;
        int ExtraElem=cnt%k;

        temp=head;

        while(temp){

            ListNode* h=temp;
            for(int i=1;i<ElementsInGroup;i++){

                temp=temp->next;

            }

            if(ExtraElem){

                temp=temp->next;
                ExtraElem--;

            }
            ListNode* right=temp->next;
            temp->next=NULL;
            arr.push_back(h);
            temp=right;

        }

        return arr;

    }
};