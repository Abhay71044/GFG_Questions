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
    Node* sortedMerge(Node* head1, Node* head2) {
        if(head1 == NULL) return head2;
        if(head2 == NULL) return head1;
        Node* head=new Node(-1);
        Node* curr=head;
        while(head1 != NULL && head2!= NULL){
            if(head1->data<=head2->data){
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
        }
        if(head2!=NULL){
            curr->next=head2;
        }
        return head->next;
    }
};