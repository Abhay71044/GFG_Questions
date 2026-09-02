/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* removeDuplicates(Node* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        Node* curr=head;
        while(curr!=NULL){
            if((curr->next!=NULL) && (curr->data == curr->next->data)){
                Node* temp=curr->next;
                curr->next=curr->next->next;
                temp->next=NULL;
                delete temp;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};