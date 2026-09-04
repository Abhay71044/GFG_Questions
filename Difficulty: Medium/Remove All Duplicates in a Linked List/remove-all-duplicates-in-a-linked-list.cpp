/* Structure of linked list Node
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
    Node* removeDuplicates(Node* head) {
        if(head==NULL || head->next==NULL) return head;
        Node* dummy=new Node(-1);
        dummy->next=head;
        Node* prev=dummy;
        Node* curr=head;
        while(curr!=NULL){
            bool dublicate=false;
            while(curr->next!=NULL && curr->data==curr->next->data){
                dublicate=true;
                curr=curr->next;
            }
            if(dublicate){
                prev->next=curr->next;
            }
            else{
                prev=curr;
            }
            curr=curr->next;
        }
        return dummy->next;
    }
};