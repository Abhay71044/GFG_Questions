/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = nullptr;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        Node* slow=head;
        Node* fast=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        }
        return slow->data;
    }
};