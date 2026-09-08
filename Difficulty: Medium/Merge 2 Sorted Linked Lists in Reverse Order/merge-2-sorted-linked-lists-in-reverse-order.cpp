/* Structure of a linked list Node
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
  
    Node *mergeResult(Node *head1, Node *head2) {
        Node* dummy=new Node(-1);
        Node* curr=dummy;
        while(head1!=NULL && head2!=NULL){
            if(head1->data <= head2->data){
                curr->next=head1;
                curr=head1;
                head1=head1->next;
            }
            else{
                curr->next=head2;
                curr=head2;
                head2=head2->next;
            }
        }
        if(head1!=NULL){
            curr->next=head1;
            curr=head1;
        }
        if(head2!=NULL){
            curr->next=head2;
            curr=head2;
        }
        Node* rev=reverse(dummy->next);
        return rev;
    }
};
