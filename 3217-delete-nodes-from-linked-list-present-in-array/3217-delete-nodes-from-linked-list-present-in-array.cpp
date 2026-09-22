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
    ListNode* modifiedList(vector<int>& arr, ListNode* head) {

        map<int,int> mp;

        for(int x:arr) mp[x]++;

        ListNode* temp=head;
        ListNode* left=NULL;

        while(temp){

            if(mp[temp->val]){

                if(temp==head){

                    head=head->next;
                    temp->next=nullptr;
                    ListNode* cur=temp;
                    temp=head;

                }else{

                    left->next=temp->next;
                    temp->next=nullptr;
                    temp=left->next;

                }
                continue;

            }
            
            left=temp;
            temp=temp->next;

        }

        return head;
        
    }
};