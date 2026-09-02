/*
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
  
    Node* reverse(Node* &head){
        Node* prev=NULL;
        Node* curr=head;
        Node* forward=curr->next;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        return prev;
    }
  
    Node* addTwoLists(Node* head1, Node* head2) {
        head1=reverse(head1);
        head2=reverse(head2);
        Node* head = NULL;
        Node* tail = NULL;
        int carry=0;
        while(head1!= NULL && head2!=NULL){
            int sum=head1->data+head2->data+carry;
            int digit=sum%10;
            carry=sum/10;
            Node* newNode=new Node(digit);
            if(head==NULL){
                head=newNode;
                tail=newNode;
            }
            else{
                tail->next=newNode;
                tail=newNode;
            }
            head1=head1->next;
            head2=head2->next;
        }
        while(head1!=NULL){
            int sum=head1->data+carry;
            int digit=sum%10;
            carry=sum/10;
            Node* newNode=new Node(digit);
            tail->next=newNode;
            tail=newNode;
            head1=head1->next;
        }
        while(head2!=NULL){
            int sum=head2->data+carry;
            int digit=sum%10;
            carry=sum/10;
            Node* newNode=new Node(digit);
            tail->next=newNode;
            tail=newNode;
            head2=head2->next;
        }
        while(carry!=NULL){
            int sum=carry;
            int digit=sum%10;
            carry=sum/10;
            Node* newNode=new Node(digit);
            tail->next=newNode;
            tail=newNode;
        }
        Node* newHead=reverse(head);
        while (newHead->next != NULL && newHead->data == 0) {
            newHead = newHead->next;
        }
        return newHead;
    }
};