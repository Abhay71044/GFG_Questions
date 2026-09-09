/* Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int key) {
        data = key;
        next = nullptr;
    }
}; */

class Solution {
  public:
  
    Node* reverse(Node* head){
        Node* prev=NULL;
        Node* curr=head;
        while(curr!=NULL){
            Node* forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
  
    void rearrange(Node* head) {
        Node* first=head;
        Node* second=head->next;
        Node* curr=first->next;
        while(curr!=NULL && curr->next!=NULL){
            first->next=curr->next;
            first=curr->next;
            curr->next=first->next;
            curr=first->next;
        }
        first->next=NULL;
        second=reverse(second);
        first->next=second;
    }
};