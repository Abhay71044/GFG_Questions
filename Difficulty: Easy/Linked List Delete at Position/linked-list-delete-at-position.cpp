/* Structure of Linked List Node
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        Node* temp=head;
        if( x==1 ){
            Node* temp=head;
            head=head->next;
            temp->next=NULL;
            delete temp;
            return head;
        }
        while(x>2){
            temp=temp->next;
            x--;
        }
        Node* curr=temp->next;
        temp->next=curr-> next;
        curr->next=NULL;
        delete curr;
        return head;
    }
};