/*
class Node {
public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int cycleStart(Node* head) {
        Node* slow=head;
        Node* fast=head;
        if(head==NULL){
            return -1;
        }
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
            if(slow == fast){
                slow=head;
                break;
            }
        }
        if(fast == NULL) return -1;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow->data;
    }
};