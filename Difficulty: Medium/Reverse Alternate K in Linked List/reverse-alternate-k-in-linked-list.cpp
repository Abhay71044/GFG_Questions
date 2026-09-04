/* Linked List Node Structure
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};*/

class Solution {
  public:
  
    Node* kAltReverse(Node* head, int k) {
        if(head== NULL) return NULL;
        if(head->next==NULL) return head;
        Node* prev=NULL;
        Node* curr=head;
        Node* forward=curr->next;
        int count=0;
        while(curr!=NULL && count<k){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        count=0;
        Node* tail = head;
        count = 0;
        while(curr != NULL && count < k) {
            tail->next = curr;
            tail = curr;
            curr = curr->next;
            count++;
        }
        if(curr != NULL) {
            tail->next = kAltReverse(curr, k);
        }
        return prev;
    }
};