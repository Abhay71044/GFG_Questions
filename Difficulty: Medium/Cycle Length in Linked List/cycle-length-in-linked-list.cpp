/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        Node* slow=head;
        Node* fast=head;
        if(head == NULL) return 0;
        while(fast!=NULL){
            fast=fast->next;
            if(fast==NULL) return 0;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
            if(fast==slow){
                int len = 1;
                Node* temp = slow->next;

                while(temp != slow) {
                    temp = temp->next;
                    len++;
                }
                return len;
            }
        }
        return 0;
    }
};