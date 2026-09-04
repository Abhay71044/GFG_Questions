/* Structure for Link list node
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
    Node* deleteK(Node* head, int k) {
        if(head == NULL) return NULL;
        if(k==1) return NULL;
        Node* temp=head;
        int i=k-1;
        while(temp!=NULL){
            while(i>1 && temp!=NULL){
                temp=temp->next;
                i--;
            }
            if(temp==NULL || temp->next==NULL){
                break;
            }
            Node*curr=temp->next;
            temp->next=curr->next;
            temp=curr->next;
            curr->next=NULL;
            delete curr;
            i=k-1;
        }
        return head;
    }
};