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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {

        if(!head || !(head->next) || !(head->next->next)) return {-1,-1};

        ListNode* temp=head->next;
        ListNode* left=head;
        int cnt=1,firstCritical=-1,lastCritical=-1;
        int minDis=INT_MAX,cntCritical=0,now=INT_MAX;

        while(temp->next){

            cnt++;
            ListNode* right=temp->next;
            if((temp->val<right->val && temp->val<left->val) || (temp->val>right->val && temp->val>left->val)){

                cntCritical++;
                if(lastCritical!=-1) now=cnt-lastCritical;
                if(now<minDis) minDis=now;
                if(cntCritical==1) firstCritical=cnt;
                lastCritical=cnt;

            }

            left=temp;
            temp=temp->next;

        }

        int maxDis=lastCritical-firstCritical;

        if(cntCritical<=1) return {-1,-1};

        return {minDis,maxDis};
        
    }
};