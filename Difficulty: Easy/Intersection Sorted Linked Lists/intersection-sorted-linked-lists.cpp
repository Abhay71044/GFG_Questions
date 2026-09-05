/* Structure of a Linked list Node 
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        Node* dummy=new Node(-1);
        Node* newhead=dummy;
        while(head1!=NULL && head2!=NULL){
            if(head1->data == head2->data){
                Node* newNode=new Node(head1->data);
                dummy->next=newNode;
                dummy=newNode;
                head1=head1->next;
                head2=head2->next;
            }
            else if(head1->data < head2->data){
                head1=head1->next;
            }
            else{
                head2=head2->next;
            }
        }
        return newhead->next;
    }
};