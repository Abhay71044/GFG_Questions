/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
}; */
class Solution {
  public:
    Node* divide(Node* head) {
        Node* evenhead=new Node(-1);
        Node* even=evenhead;
        Node* oddhead=new Node(-1);
        Node* odd=oddhead;
        while(head!=NULL){
            Node* nextNode=head->next;
            if(head->data % 2 == 0){
                even->next=head;
                even=head;
            }
            else{
                odd->next=head;
                odd=head;
            }
            head->next=NULL;
            head=nextNode;
        }
        even->next=oddhead->next;
        return evenhead->next;
    }
};