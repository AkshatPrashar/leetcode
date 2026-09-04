/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node* temp=head;

        while(temp){

            Node* copyNode=new Node(temp->val);
            copyNode->next=temp->next;
            temp->next=copyNode;
            temp=copyNode->next;

        }

        temp=head;
        while(temp){

            if(temp->random) temp->next->random=temp->random->next;
            temp=temp->next->next;

        }

        Node* start=new Node(-1);
        Node* res=start;
        temp=head;

        while(temp){

            res->next=temp->next;
            res=temp->next;
            temp->next=temp->next->next;
            temp=temp->next;

        }

        return start->next;


    }
};