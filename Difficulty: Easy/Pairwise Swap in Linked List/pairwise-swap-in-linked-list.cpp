/* Structure of linked list Node
class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/
class Solution {
  public:
    Node* pairwiseSwap(Node* head) {
        if(head==NULL) return NULL;
        if(head->next == NULL) return head;
        Node* prev=NULL;
        Node* curr=head;
        Node* forward=curr->next;
        int count=0;
        while(count<2){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            count++;
        }
        if(forward!=NULL){
            head->next=pairwiseSwap(forward);
        }
        return prev;
    }
};